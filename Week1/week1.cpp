/*
Week 1 Assignment: My First Program
James Lee Kennedy, 19 Nov 19
CS 265 Programming in C++
*/

#include <iostream> //include statements(s)
using namespace std; // using namespace statement

int main()
{
	//variable declaration
	int num1, num2, num3;
	float average;

	//executable statements
	num1 = 125;
	num2 = 28;
	num3 = -25;

	average = (num1 + num2 + num3) / 3.0; // average of num1, num2, num3

	//print values of num1, num2, num3 and average
	cout << "num1 = " << num1 << "\n";
	cout << "num2 = " << num2 << "\n";
	cout << "num3 = " << num3 << "\n";
	cout << "average = " << average;

	return 0; //return statement

	system("PAUSE");
}