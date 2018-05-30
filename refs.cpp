#include <iostream>
using namespace std;

int & incr(int &x)
{
    x++;
    int temp = 10;
    int &p = temp;
    return p;
}
int main()
{
    int a = 1;
    int &b = a;

    incr(a);
    cout << "a=" << a << ", b=" << b << endl;
    a = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    incr(b);
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    a=incr(b);
    cout << "a=" << a << ", b=" << b << endl;
    a = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    b = incr(a);
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    a = incr(a);
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    incr(a)++;
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    incr(b)++;
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    a = (incr(b)++);
    cout << "a=" << a << ", b=" << b << endl;
    b = 0;
    cout << "a=" << a << ", b=" << b << endl;
    cout << endl;

    return 0;
}
