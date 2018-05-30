#include <iostream>
using namespace std;
#define summ(a, b) a+b;
int fsumm(int a, int b) {return a+b;}
int main()
{
    int x, y;
    cin >> x >> y;
    int su = (int)summ(x, y);
    cout << su << endl;
    cout << fsumm(x, y) << endl;
    return 0;
}
