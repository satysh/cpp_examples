#include <iostream>
#include <iterator>
#include <cstring>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
//----------------------------------------------------------------------------
bool read_and_sort(char const *pointer);
//----------------------------------------------------------------------------
int main(int argc, char const *argv[])
{
    string from, to;
    if (argc < 2)
        cin >> from >> to;
    else
    {
        int i;
        for (i = 1; i < argc; i++)
        {
            if (read_and_sort(argv[i]))
            {
                cerr << "file: " << i << ": " << argv[i] << " error\n";
                return 1;
            }
        }
    }

    return 0;
}
//--------------------------------------------------------------------------
bool read_and_sort(char const *p)
{
    ifstream is(p);
    istream_iterator<string> ii(is);
    istream_iterator<string> eos;

    vector<string> b(ii, eos);
    sort(b.begin(), b.end());

    string in = p;
    string to = "sorted_"+in;
    ofstream os(to.c_str());
    ostream_iterator<string> oo(os, "\n");

    unique_copy(b.begin(), b.end(), oo);

    return !is.eof() || !os;
}
