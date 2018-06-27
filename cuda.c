#include <stdio.h>
#include <stdlib.h>
#define N (1024*1024)

_global_ void kernel (float* dA)
{
    int idx = blockIdx.x * blockDim.x + threadId.x;
    float x = 2.0f * 3.1415926f * (float)idx / (float)N;
    dA[idx] = sinf(sqrtf(x));
}

int main(int argc, char const *argv[])
{
    float* dA;
    float* hA;

    hA = (float*)malloc(N * sizeof(float));

    cudaError_t errMem;
    errMem = cudaMalloc((void**)&dA, N * sizeof(float));
    if (errMem != cudaSuccess)
    {
        fprintf(stderr, "Can not allocate GPU memory: %s\n", cudaGetErrorString(errMem));
        return 1;
    }

    kernel <<< N/512, 512 >>> (dA);
    cudaError_t err;
    cudaDeviceSynchronize();
    err = cudaGetLastError();
    if (err != cudaSuccess)
    {
        fprintf(stderr, "Can not launch CUDA kernel: %s\n", cudaGetErrorString(err));
        return 1;
    }

    cudaMemcpy(hA, dA, N * sizeof(float), cudaMemcpyDeviceToHost);

    for (int idx = 0; idx < N; idx++)
    {
        printf("a[%d]=%.5f\n", idx, hA[idx]);
    }

    free(hA);
    cudaFree(dA);
    return 0;
}
