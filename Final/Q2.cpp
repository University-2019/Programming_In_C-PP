/*
Week 8 Final: Q2
James Lee Kennedy, 2 Jan 20
CS 265
*/

/*
Instructions:
Write the definition of a function that takes as input the three numbers. The function returns true if the first number to the power of the second number equals the third number, otherwise, it returns false. (Assume that the three numbers are of type double).
*/

#include <iostream>
#include <cmath>
using namespace std;

bool checkPower (double a, double b, double c) {
  if (pow(a, b) == c)
    return true;
  else
    return false;
}

int main() {
  double a, b, c;
  bool flag;
  cout << "Enter values for a, b, and c";
  cin >> a >> b >> c;
  
  flag = checkPower(a, b, c);
  if (flag == true) {
    cout << a << "^" << b << " = " << c;
    cout << endl;
  }
  else {
    cout << a << "^" << b << " != " << c;
    cout << endl;
  }
  
  system ("pause");
  return 0;
}