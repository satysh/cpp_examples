#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    const char* state1 = "Florida";
    const char* state2 = "Kansas";
    const char* state3 = "Euphoria";

    int len = strlen(state2);
    cout << "Increasing loop index:" << endl;
    int i;

    for (i = 1; i <= len; i++) {
        cout.write(state2, i);
        cout << endl;
    }

    cout << "Decreasing loop index:" << endl;
    for (i = len; i >= 1; i--) {
        cout.write(state2, i);
        cout << endl;
    }

    cout << "Exceeding string length: " << endl;
    cout.write(state2, len + 5) << endl;

    cout << "Long string outputing: " << endl;
    long n = 1500015227;

    cout.write( (char*) &n, sizeof n ) << endl;

    return 0;
}
