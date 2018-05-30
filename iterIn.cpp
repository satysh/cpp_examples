#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    istream_iterator<string> ii(cin);
    string s1 = *ii;
    ++ii;
    string s2 = *ii;

    cout << s1 << ' ' << s2 << endl;

    return 0;
}
