/*
Week 8 Final: Q1
James Lee Kennedy, 2 Jan 20
CS 265
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  int num1;
  int num2;
  
  cout << fixed << showpoint << setprecision(2);
  
  cout << "Enter two intergers: ";
  cin >> num1 >> num2; 
  cout << endl;
  
    if (num1 != 0 && num2 !=0)
      cout << sqrt (abs(num1 + num2) + 0.5) << endl;
    else if (num1 != 0)
      cout << floor (num1 + 0.5) << endl;
    else if (num2 != 0)
      cout << ceil (num2 + 0.5) << endl;
    else
      cout << 0 << endl;
  
  return 0;
}

/*
a.) What is the output if the inupt is -23  8?
    3.94
    
b.) What is the output if the input is 12   32?
    6.67
    
c.) What is the output if the input is 15   0?
    15
    
d.) What is the output if the input is 0    -36?
    -35
    
e.) What is the output if the input is 0    0?
    0
*/