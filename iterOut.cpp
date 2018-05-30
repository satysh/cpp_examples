#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ostream_iterator<string> oo(cout);
    *oo = "Hello, ";
    ++oo;
    *oo = "world!\n";
    return 0;
}
