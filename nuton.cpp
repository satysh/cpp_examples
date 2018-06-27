#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
//    cout << "Set X0: ";
    double Xn;
    cin >> Xn;
    double mem = Xn;

    double funk;
    double eps = 0.0001;
    double dx;

    do
    {
        double preXn = Xn;
        Xn = Xn - (2.*Xn*Xn*Xn - 11.*Xn*Xn + 12.*Xn + 9.) / (6.*Xn*Xn - 22.*Xn + 12.);
        dx = fabs( Xn - preXn );
    } while (dx > eps);


    cout.precision(3);
    cout << setw(2) << mem << ": " << setw(2) << Xn << endl;
    return 0;
}
