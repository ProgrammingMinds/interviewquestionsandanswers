#include<iostream>
using namespace std;

bool checkPrimeNumber(int num)
{
	bool isPrime = true;

	if (num == 0 || num == 1)
	{
		isPrime = false;
	}

	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = false;
		}
	}

	return isPrime;
}

int main()
{
	int n;

	cout << "Enter positive number: ";
	cin >> n;

	if (checkPrimeNumber(n))
	{
		cout << "\n" << n << " is prime number\n";
	}
	else
	{
		cout << "\n" << n << " is not prime number\n";
	}

	
	return 0;
}