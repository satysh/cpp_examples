#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char name[] = "Volodiya";
    cout << name << endl;
    int n = strlen(name);
    cout << n << endl;
    for (unsigned int i = 0; i < n; i++) {
        cout << name[i] << endl;
    }

    char* pn = new char[n+1];
    cin >> pn;
    int num = strcmp(pn, name);
    cout << num << endl;
    return 0;
}
