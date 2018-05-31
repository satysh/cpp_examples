#include <iostream>
#include <map>
#include <cstring>
using namespace std;
//--------------------------------------------
void eat_line() { while (cin.get() != '\n') continue; }

int count_pair_letters(char const* p, const char* two_let);
int count_pair_letters(string s, string two_let);
//--------------------------------------------
int main(int argc, char const *argv[])
{
    string str[argc-1];

    for (int i = 0; i < argc-1; i++)
        str[i] = argv[i+1];

    if (argc < 2){
        cerr << "You forget send input strings" << endl;
        return 1;
    }


    for (int i = 1; i < argc; i++)
    {
        cout << "Send two lwtters to count in string: " << i << endl;
        char tl[3];
        for (int j = 0; j < 2; j++)
            tl[j] = cin.get();
        eat_line();
        tl[2] = '\0';

        char* ptl = &tl[0];
        string stl = ptl;
        cout << ptl << ": " << count_pair_letters(argv[i], ptl) << endl;
        cout << ptl << ": " << count_pair_letters(str[i-1], stl) << endl;
    }


    return 0;
}
//--------------------------------------------
int count_pair_letters(char const* p, const char* two_let)
{
    int number = 0;
    int len = strlen(p);
    for (int i = 0; i < len-1; i++)
    {
        char cstr[3];
        int n = 0;
        for (int j = i; j < i+2; j++)
        {
            cstr[n] = p[j];
            n++;
        }
        cstr[2] = '\0';

        if (strcmp(cstr, two_let) == 0) number++;
    }

    return number;
}

int count_pair_letters(string s, string two_let)
{
    int number = 0;
    int len = strlen(s.c_str());
    for (int i = 0; i < len-1; i++)
    {
        string ss = s.substr(i, 2);
        if (ss == two_let) number++;
    }

    return number;
}
