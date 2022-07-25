
// Write program to check leap year using C++
// Following condition we need to check for the leap year
// 1. If year is divsible by 4 and not divisible by 100, it is leap year
// 2. If year is divisible by 4 as well as 100 and 400, it is leap year

#include<iostream>
using namespace std;

int main()
{
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "\n" << year << " is leap year\n";
			}
			else
			{
				cout << "\n" << year << " is not leap year\n";
			}
		}
		else
		{
			cout << "\n" << year << " is leap year\n";
		}

	}
	else
	{
		cout << "\n" << year << " is not leap year\n";
	}

	return 0;
}

