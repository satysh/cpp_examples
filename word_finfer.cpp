#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream fin;
	string str1 = "int";

	for (int i = 1; i < argc; i++)
	{
		fin.open(argv[i]);
		if (!fin.is_open())
		{
			cerr << "error to input " << argv[i] << "file\n";
			fin.clear();
			fin.close();
			continue; 
		}

		string str2;

		while (fin >> str2)
			if (str2 == str1)
			{
				cout << argv[i] << endl;
				break;
			}
		fin.clear();
		fin.close();
	}

	return 0;
}