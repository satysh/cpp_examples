#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << showpoint << fixed << right;

    cout << setw(6) << "N" << setw(14) << "square root" << setw(15) << "fourth root\n";
    double root;
    for (int n = 10; n <= 100; n += 10)
    {
        root = sqrt(n);
        cout << setw(6) << setfill('.') << n
             << setfill(' ') << setw(12)
             << setprecision(3) << root
             << setw(14) << setprecision(4)
             << sqrt(root) << "\n";
    }
    return 0;
}
