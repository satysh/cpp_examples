#include <iostream>
using namespace std;

inline void cleaner() { while (cin.get() != '\n') continue; }

int main()
{
    int n = 1;
    int i = 0;
    cout.setf(ios_base::showbase | ios_base::left);
    while (n != 0)
    {
        cout.width(0);
        cout << dec;
        cout << i << ": Enter number to convert (enter 0 to quit): ";
        if ( !(cin >> n) )
        {
            clog.setf(ios_base::right);
            clog.width(15);
            clog << "Invalid entered number - bye!\n";
            return 1;
        }

        cleaner();

        cout << "dec: " ;
        cout.width(15);
        cout << n;
        cout << hex << "hex: " ;
        cout.width(15);
        cout << n;
        cout << oct << "oct: " ;
        cout.width(15);
        cout << n;
        cout << endl;
        i++;
    }
    return 0;
}
