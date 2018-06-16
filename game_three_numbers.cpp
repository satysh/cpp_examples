#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;
//-----------------------------------------
void string_eat();
//-----------------------------------------
int main(int argc, char const *argv[])
{	
	srand(time(0));
	system("clear");
	
	int n;
	cout << "Set events number: ";
	cin >> n;
	cout << "START GAME!\n"
		<< "Set number: 1, 2 or 3\n";

	int cap = 0;
	int exe = 0;
	for (int i = 0; i < n; i++)
	{
		int a = 1 + rand()%3;
		int b;
		cout << "GAME NUMBER: " << i+1 << endl;
		cout << "set number: ";
		cin >> b;
		if (b > 3)
		{
			exe++;
			cout << "You must set only one of the numbers: 1 2 or 3.\n";
			cout << "Press any button to continue.\n";
			cin.get();
			string_eat();
			system("clear");
			continue;
		}

		for (int j = 1; j <= 3; j++)
		{
			if (j != a && j != b)
			{
				cout << j << " not dropped out.\nYOU MAY CHANGE THE SELECTION.\n";
				break;
			}
		}
		cout << "set number: ";
		cin >> b;
		if (b > 3)
		{
			exe++;
			cout << "You must set only one of the numbers: 1 2 or 3.\n";
			cout << "Press any button to continue..\n";
			cin.get();
			string_eat();
			system("clear");
			continue;
		}

		system("clear");
		int pole = 25;
		if (b == a) 
		{	
			cap++;
			for (int j = 0; j < pole; j++)
			{
				int rnd = 1 + rand()%pole;
				for (int k = 0; k < rnd; k++)
					cout << "+";
				cout << "GOOD!";
				for (int k = 0; k < rnd; k++)
					cout << "+";
				cout << endl;
			} 
			
		}
		else 		
		{
			exe++;
			for (int j = 0; j < pole; j++)
			{
				int rnd = 1 + rand()%pole;
				for (int k = 0; k < rnd; k++)
					cout << "-";
				cout << "BAD!";
				for (int k = 0; k < rnd; k++)
					cout << "-";
				cout << endl;
			}  
			
		}

		if (cap+exe == n) break;
	}

	system("clear");
	cout << "GAME END!\n";
	cout << "GOODS NUMBER IS: " << cap << ", BADS NUMBER IS: " << exe << endl;
	if (cap < exe) 		 cout << "YOU LOSSER! LOL\n";
	else if (cap == exe) cout << "TANOS LIKE IT!\n";
	else 				 cout << "YOU WIN! and FUCK YOU!\n";

	return 0;
}
//------------------------------------------------------------------------------
void string_eat()
{
	while (cin.get() != '\n') continue;
}