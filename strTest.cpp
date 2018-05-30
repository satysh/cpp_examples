#include <iostream>
#include <cstring>
using namespace std;
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
        cout << argv[i] << endl;

    string name = "Ilyas Satyshev";
    cout << "Author: ";
    printf("%s\n", name.c_str());

    const char* str = name.c_str();
    cout << str << endl;

    name.replace(0, strlen(str)+1, "Satyshev Ilyas Satyshevich");

    cout << name << endl;

    cout << name.substr(0, 8) << endl;
    return 0;
}
