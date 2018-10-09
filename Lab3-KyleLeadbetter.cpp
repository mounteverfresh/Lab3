// Lab3.cpp
// Kyle Leadbetter
// COSC 2030

#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*
	short s(0);
	short shortSum(0);
	cout << "Enter a number greater than 0:  ";
	cin >> s;

	while(0 < s) {
		for (int i = 0; i <= s; i++)
		{
			shortSum += i;
		}
		cout << "The sum of all natural numbers up to " << s << " is: " << shortSum << endl << endl << endl;

		shortSum = 0;
		cout << "Enter a new number greater than 0:  ";
		cin >> s;

	}
	*/

	/*
	long lon(0);
	long longSum(0);
	cout << "Enter a number greater than 0:  ";
	cin >> lon;

	while (0 < lon) {
		for (int i = 0; i <= lon; i++)
		{
			longSum += i;
		}
		cout << "The sum of all natural numbers up to " << lon << " is: " << longSum << endl << endl << endl;

		longSum = 0;
		cout << "Enter a new number greater than 0:  ";
		cin >> lon;
	}
	*/

	/*int in(1);
	double product(1);
	cout << "Enter a number greater than 0:  ";
	cin >> in;

	while (0 < in) {
		for (long i = 1; i <= in; i++)
		{
			product *= i;
		}
		cout << "The sum of all natural numbers up to " << in << " is: " << product << endl << endl << endl;

		product = 1;
		cout << "Enter a new number greater than 0:  ";
		cin >> in;
	}
	*/

	for (double i = 3.4; i < 4.4; i += 0.2) 
	{ 
		cout << "i = " << i << endl;
	}

	return 0;
}

