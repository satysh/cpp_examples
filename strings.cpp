#include <iostream>
#include <iterator>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::istream_iterator;
int main(int argc, char const *argv[])
{
    string* inputs = new string[argc];
    int i;
    for (i = 0; i < argc; i++)
    {
        inputs[i] = argv[i];
    }

    for (i = 0; i < argc; i++)
    {
        cout << inputs[i] << endl;
    }

    istream_iterator<string> ii(cin);
    string str = *ii;
    cout << str << endl;
    while (cin.get() != '\n') continue;

    string fstr;
    getline(cin, fstr);

    cout << fstr << endl;
    return 0;
}
