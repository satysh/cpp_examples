#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        return 1;
    }

    ifstream fin;
    long count;
    long total = 0;
    char ch;
    for (int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);
        if (!fin.is_open())
        {
            cerr << "Couldn't open file " << argv[file] << "\n";
            fin.clear();
            continue;
        }

        count = 0;
        while (fin.get(ch))
        {
            if (ch != '\n')
                count++;
        }
        cout << count << " characters in " << argv[file] << "\n";
        total += count;
        fin.clear();
        fin.close();
    }

    cout << total << " characters in all files\n";

    return 0;
}
