#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct Pair
{
    string name;
    double val;
};

vector<Pair> pairs;
double & value(const string& s)
{
    for (int i = 0; i < pairs.size(); i++)
        if (s == pairs[i].name) return pairs[i].val;
    Pair p = {s, 0.};
    pairs.push_back(p);
    return pairs[pairs.size()-1].val;
}

int main()
{
    string buf;

    while (cin>>buf) value(buf)++;

    vector<Pair>::const_iterator p;
    for (p = pairs.begin(); p != pairs.end(); ++p)
        cout << p->name << ": " << p->val << '\n';

    return 0;
}
