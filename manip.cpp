#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter an integer: ";
    int n;
    cin >> n;
    cout << "n      n*n\n";
    cout << n << "      "
         << n * n << " (dicimal)\n";

    // set hexadecimal
    cout << hex;
    cout << n << "      "
         << n * n << " (hexdicimal)\n";

    // set octal
    cout << oct;
    cout << n << "      "
         << n * n << " (octal)\n";

    dec(cout);
    cout << n << "      "
         << n * n << " (dicimal)\n";
    return 0;
}
