#include <iostream>
#include <map>
#include <cstring>
#include <fstream>
#include <iomanip>
using namespace std;
typedef map<string, int> wdic;

int main(int argc, char const *argv[])
{
    ifstream fin;
    cout << left;
    for (int i = 1; i < argc; i++)
    {
        fin.open(argv[i]);
        if (!fin.is_open())
        {
            cerr << "ERROR: in '" << argv[i] << "' file, may be file not exist" << endl;
            continue;
        }

        wdic cont;
        bool bittest = false;
        while (!fin.eof())
        {
            if (fin.bad())
            {
                cerr << "ERROR: in '" << argv[i] << "' file" << endl;
                break;
                bittest = true;
            }
            string cstr;
            fin >> cstr;
            cont[cstr]++;
        }
        fin.close();
        if (bittest) continue;

        cout << "In file '" << argv[i] << "':" << endl;
        cout << setw(20) << "word" << " | " << "number" << endl;
        wdic::iterator it = cont.begin();
        for (it++; it != cont.end(); it++)
        {
            cout << setw(20) << (*it).first << " | " << (*it).second << endl;
        }

        cont.clear();
    }

    return 0;
}
