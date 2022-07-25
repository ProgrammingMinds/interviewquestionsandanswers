// Reverse sentence using recursion in C++ programming language

// What is recursion?
// Function calls itself until mentioned condition doesn't meet

// "peace"				  "p"
// "eace"				  "e"
// "ace"                  "a"
// "ce"					  "c"
// "e"                    "e"
// ""         Reverse -->

#include<iostream>
using namespace std;

void reverseSentence(string sentence)
{
	if (sentence.length() == 0)
	{
		return;
	}

	string rem = sentence.substr(1);
	reverseSentence(rem);

	cout << sentence[0];
}

int main()
{
	string str;

	cout << "Enter sentence to reverse: ";
	cin >> str;

	reverseSentence(str);

	return 0;
}

