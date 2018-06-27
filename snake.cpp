#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	char up;
	char down;
	char left;
	char right;

	char sign;

	int n = 0;
	for (int i = 0; i < 100; i++)
	{	
		sign = cin.get();
		if (sign == 'a')
		{
			n -= 15;
			system("clear");
		}
		else if (sign == 's')
		{
			system("clear");
			for (int k = 0; k < 5; k++)
			{
				for (int j = 0; j < n; j++)
					cout << " ";
				cout << "*" << endl;
			}
		}
		else 
		{	
			cout << endl;
			system("clear");
			for (int j = 0; j < n; j++)
			{
				cout << " ";
			}
			for (int j = 0; j < 5; j++)
			{
				cout << "*";
			}
		}

		n += 5;
	}
/*
	up = 'w';
	down = 's';
	left = 'a';
	right = 'd'; 

	cout << "Star\n";
	while (true)
	{
		char cur;
		cur = cin.get();

		if (cur == up)
		{
			cout << sign;
			for (int i = 0; i < 50; i++)
			{
				cout << " ";
			}
			cout << endl;
		}
		else if (cur == down)
		{
			for (int i = 0; i < 50; i++)
			{
				cout << " ";
			}
			cout << endl;	
			cout << sign;
		}
		else if (cur == left)
		{
			cout << sign;
		}
		else 
		{
			cout << " " << sign;
		}
	}
*/
	return 0;
}