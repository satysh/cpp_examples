#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        cerr << "you must enter file name and sing to delete\n";
        return 1;
    }

    ifstream fin(argv[1]);
    if (!fin.is_open())
    {
        cerr << "File " << argv[1] << " not open\n";
        return 1;
    }

    char outFileName[] = "deloutput.txt";
    ofstream fout(outFileName);

    while (!fin.eof())
    {
        bool flag = false;
        char c;
        fin.get(c);
        for (int i = 2; i < argc; i++)
        {
            char signToDel = *argv[i];
            if (signToDel == c)
            {
                flag = true;
                break;
            }
        }

        if (!flag) {fout << c;}
    }

    fin.clear();
    fin.close();
    fout.clear();
    fout.close();
/*
    fin.open(outFileName);
    fout.open("result.txt");

    char c1 = fin.get();
    while (!fin.eof())
    {
        if (c1 == '\n' && fin.peek() == '\n') {continue;}
        fout << c1;
        c1 = fin.get();
    }

    fin.clear();
    fin.close();
    fout.clear();
    fout.close();
*/
    return 0;
}
