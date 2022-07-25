// Welcome to Programming Minds
// Reverse number using C++ programming language 

#include<iostream>
using namespace std;

int main()
{
	int number, reverseNumber = 0, remainder;

	cout << "Enter number to reverse: ";
	cin >> number;

	while (number != 0)
	{
		remainder = number % 10; 
		reverseNumber = reverseNumber * 10 + remainder; 
		number /= 10; 
	}

	cout << "\n reversed number: " << reverseNumber << endl;

	

	return 0;
}
