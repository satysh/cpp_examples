#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << showpoint << fixed;
    cout << "Enter numbers: ";
    double sum = 0.0;
    double input;
    while (cin >> input)
    {
        sum += input;
    }
    cout << "Last value entered = " << input << "\n";
    cout << "Sum = " << sum << "\n";

    cin.clear();
    while (!isspace(cin.get()))
        continue;

    cout << "Now enter a new number: ";
    cin >> input;
    return 0;
}
