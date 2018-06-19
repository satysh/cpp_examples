#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	string sReal = "Real";
	string sTime = "time:";
	ifstream fin;
	for (int i = 1; i < argc; i++)
	{
		fin.open(argv[i]);
		if (fin.is_open())
		{
			string sTest;
			while (!fin.eof())
			{
				fin >> sTest;
				if (sTest == sReal)
				{
					fin >> sTest;
					if (sTest == sTime)
					{
						double number;
						fin >> number;
						cout << "File name: " << argv[i] << ", Real time: " << number << endl;
						break;
					}
				}
			}
		}
		else
		{
			cerr << argv[i] << " file not found\n";

		}
		fin.clear();
		fin.close();
	}
	return 0;
}