// Implementation of function to calculate factorial using C++ Programming Language
// What is factorial?
// c
// Factorial of 5 = 120 (1 x 2 x 3 x 4 x 5)

#include<iostream>
using namespace std;

int Factorial(int num)
{
	int fact = 1;

	for (int i = 1; i <= num; i++)
	{
		fact *= i;

	}

	return fact;
}

int main()
{
	int number, fact;

	cout << "Enter number to calculate factorial: ";

	cin >> number;

	fact = Factorial(number);

	cout << "\n Factorial of " << number << " is " << fact << "\n";



	return 0;
}
