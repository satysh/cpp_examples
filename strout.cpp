#include <iostream>
using namespace std;
#include <sstream>
#include <string>

int main()
{
    ostringstream outstr;

    string hdisk;
    cout << "What's the name of your hard disk? ";
    getline(cin, hdisk);
    int  cap;
    cout << "What's its compacity in GB? ";
    cin >> cap;

    outstr << "The hard disk " << hdisk << " has a compacity of " << cap << " GB.\n";

    string result = outstr.str();
    cout << result;

    return 0;
}
