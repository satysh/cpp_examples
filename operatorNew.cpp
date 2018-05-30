#include <bits\stdc++.h>
#include <new>
using std::cout;
using std::endl;

class A
{
public:
	A(int x) {d = x;}
	~A() {}
	void Print_content() {cout << "memmory contains: " << d << endl;}
private:
	int d;
};

int main(int argc, char const *argv[])
{
	const int n = 50;
	A* placementMemory = static_cast<A*>(operator new[](n*sizeof(A))); // "static_cast<A*>" may be writen (A*)
	
	for (int i = 0; i < n; i++)
	{
		new (placementMemory + i)A(i);
	}

	for (int i = 0; i < n; i++)
	{	
		printf("address: %p\t", placementMemory);
		placementMemory->Print_content();
		placementMemory->~A();
		placementMemory++;
	}

	operator delete[] (placementMemory);

	cout << "programm finished" << endl;

	return 0;
}
