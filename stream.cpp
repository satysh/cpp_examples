#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    char a;
    while (cin >> a) {
        cout << a;
        if (a == '\0')
            cout << "\n";
    }

    return 0;
}
