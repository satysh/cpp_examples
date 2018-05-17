#include <iostream>
using namespace std;

#include <fstream>
#include <iomanip>
#include <cstdlib>

inline void eatline() { while (cin.get() != '\n') continue; }

struct planet
{
    char name[20];
    double population;
    double g;
};

const char* file = "planet.dat";

int main(int argc, char const *argv[])
{
    planet pl;
    cout << fixed;

    fstream finout;
    finout.open(file, ios::in | ios::out | ios::binary);
    int ct = 0;
    if (finout.is_open())
    {
        finout.seekg(0);
        cout << "Here are the current contents of the " << file << " file:\n";
        while (finout.read((char*) &pl, sizeof pl))
        {
            cout << ct++ << ": " << setw(20) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << "| " << pl.g << "\n";
        }
        if (finout.eof())
            finout.clear();
        else
        {
            cerr << "Error in reading " << file << ".\n";
            exit(1);
        }
    }
    else
    {
        cerr << file << " could not be opened - bye.\n";
        exit(2);
    }

    cout << "Enter the record number you wish to change: ";
    long rec;
    cin >> rec;
    eatline();
    if (rec < 0 || rec >= ct)
    {
        cerr << "Invalid record number - bye.\n";
        exit(3);
    }
    streampos place = rec * sizeof pl;
    finout.seekg(place);
    if (finout.fail())
    {
        cerr << "Error on attemted seek\n";
        exit(4);
    }
    finout.read((char*) &pl, sizeof pl);
    cout << "You selection:\n";
    cout << rec << ": " << setw(20) << pl.name << ": "
         << setprecision(0) << setw(12) << pl.population
         << setprecision(2) << setw(6) << "| " << pl.g << "\n";

    if (finout.eof())
        finout.clear();
    cout << "Enter planet name: ";
    eatline();
    cout << "Enter planetary population: ";
    cin >> pl.population;
    cout << "Enter planet's acceleration of gravity: ";
    cin >> pl.g;
    finout.seekp(place);
    finout.write((char*) &pl, sizeof pl) << flush;
    if (finout.fail())
    {
        cerr << "Error on attemted seek\n";
        exit(5);
    }

    ct = 0;
    finout.seekg(0);
    cout << "Here are the current contents of the " << file << " file:\n";
    while (finout.read((char*) &pl, sizeof pl))
    {
        cout << ct++ << ": " << setw(20) << pl.name << ": "
             << setprecision(0) << setw(12) << pl.population
             << setprecision(2) << setw(6) << "| " << pl.g << "\n";
    }
    finout.close();
    cout << "Done.\n";

    return 0;
}
