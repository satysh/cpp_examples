#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>
const char* file = "guests1.dat";
const int Len = 40;
int main(void)
{
    char ch;
    ifstream fin;
    fin.open(file);

    if (fin.is_open())
    {
        cout << "Here are the current contents of the " << file << " file\n";
        while (fin.get(ch))
            cout << ch;
    }
    fin.close();

    ofstream fout(file, ios::out | ios::app);
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output.\n";
        exit(1);
    }
    cout << "Enter guest names (enter a blank line to quit):\n";
    char name[Len];
    cin.get(name, Len);
    while (name[0] != '\0')
    {
        while (cin.get() != '\n')
            continue;
        fout << name << "\n";
        cin.get(name, Len);
    }
    fout.close();

    fin.clear();
    fin.open(file);
    if (fin.is_open())
    {
        cout << "Here are the new contents of the " << file << " file\n";
        while (fin.get(ch))
            cout << ch;
    }
    fin.close();
    cout << "Done\n";
    return 0;
}
