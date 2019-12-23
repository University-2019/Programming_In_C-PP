/*
Week 6 Assignment: Random Numbers
James Lee Kennedy, 23 Dec 2019
CS 265
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Function Prototypes
int doubleNum(int x);
int reverseNum(int x);
int raiseNum(int x);
int sumNum(int x);
int raiseFirstToSecondNum(int x);
int raiseFirstTwoToLastNum(int x);
int primeNum(int x);
int lessThanTen (int x);
void printFunction(int x, int y);

int main() {
  // Initializing Variables
  int iRandom;
  int menuSelection;
  int primeYesNo;
  
  // Initializing random seed
  srand (time(NULL));
  
  // Generating random number
  iRandom = rand() % 100;
  cout << "The two digit number is: " << iRandom << endl;
  
  do {
    // Menu Selection
    cout << "1: Enter 1 to double the number." << endl;
    cout << "2: Enter 2 to reverse the digits of the number." << endl;
    cout << "3: Ennter 3 to raise the number to the power of 2, 3, or 4." << endl;
    cout << "4: Enter 4 to find the sum of the digits of the number." << endl;
    cout << "5: Enter 5 to raise the first digit to the power of the second digit." << endl;
    cout << "6: Enter 6 to raise the first two digits to the poer of the last digit." << endl;
    cout << "9: Enter 9 to end the program." << endl;
    
    cin >> menuSelection;
    
    switch (menuSelection) {
      case 1:
        iRandom = doubleNum(iRandom);
        primeYesNo = primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
        
      case 2:
        iRandom = reverseNum(iRandom);
        primeYesNo = primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
        
      case 3:
        iRandom = raiseNum(iRandom);
        primeYesNo = primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
        
      case 4:
        iRandom = sumNum(iRandom);
        primeYesNo = primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
      
      case 5:
        iRandom = raiseFirstToSecondNum(iRandom);
        primeYesNo =  primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
      
      case 6:
        iRandom =  raiseFirstTwoToLastNum(iRandom);
        primeYesNo =  primeNum(iRandom);
        printFunction(iRandom, primeYesNo);
        iRandom = lessThanTen(iRandom);
        break;
      
      default:
        break;
      
      system("pause");
    }
  } while(menuSelection !=9);
  
  cout << endl;
  
  system("pause");
  
  return 0;
}

int doubleNum(int iRandom) {
  iRandom = iRandom * 2;
  return iRandom;
}

int reverseNum(int iRandom) {
  // Declaring the variables
  int ones =0, tens = 0, huns = 0, thous = 0;
  
  // Breaking into individual digits
  if (iRandom < 10) {
    return iRandom;
  }
  
  if (iRandom < 100) {
    ones = iRandom % 10;
    iRandom = iRandom / 10;
    tens = iRandom % 10;
    
    iRandom = (ones * 10) + (tens * 1);
    
    return iRandom;
  }
  
  if (iRandom < 1000) {
    ones = iRandom % 10;
    iRandom = iRandom / 10;
    tens = iRandom % 10;
    iRandom = iRandom / 10;
    thous = iRandom % 10;
    
    iRandom = (ones * 100) + (tens * 10) + (thous * 1);
    
    return iRandom;
  }
}

int raiseNum (int iRandom) {
  // Declaring the variables
  double raiseTo;
  
  // Additional input for raising iRandom to 2, 3, or 4
  cout << endl << "Enter power (2, 3, 4): ";
  cin >> raiseTo;
  
  iRandom = pow(iRandom, raiseTo);
  
  return iRandom;
}

int sumNum (int iRandom) {
  // Declaring the variables
  int ones, tens, huns, thous;
  
  // Breaking into individual digits
  ones = iRandom % 10;
  
  // Divide iRandom by 10 to get to tens
  iRandom = iRandom / 10;
  tens = iRandom % 10;
  
  // Divide iRandom by 10 to get to hundreds
  iRandom = iRandom / 10;
  huns = iRandom % 10;
  
  // Divide iRandom by 10 to get to thousands
  iRandom = iRandom / 10;
  thous = iRandom % 10;
  
  iRandom = ones + tens + huns + thous;
  
  return iRandom;
}

int raiseFirstToSecondNum(int iRandom) {
  // Declaring the variables
  double ones, tens;
  
  // Breaking into individual digits
  ones = iRandom % 10;
  
  // Divide iRandom by 10 to get to tens
  iRandom = iRandom / 10;
  tens = iRandom % 10;
  
  iRandom = pow(tens, ones);
  
  return iRandom;
}

int raiseFirstTwoToLastNum(int iRandom) {
  if (iRandom < 100 || iRandom > 999) {
    cout << endl;
    cout << "To prefom this operation, it must be a three digit number." << endl;
    
    return iRandom;
  }
  
  double ones, tens, huns;
  
  // Breaking into individual digits
  ones = iRandom % 10;
  
  // Divide iRandom by 10 to get to tens
  iRandom = iRandom / 10;
  tens = iRandom % 10;
  
  // Divide iRandom by 10 to get to hundreds
  iRandom = iRandom / 10;
  huns = iRandom % 10;
  
  iRandom = pow(ones + (tens * 10), huns);
  
  return iRandom;
}

int primeNum(int iRandom) {
  int primeYesNo;
  int count = 0;
  
  // Loop to see if number is divisable
  for (int i = 2; i < iRandom; i++) {
    if (iRandom % i == 0) {
      count++;
      
      break;
    }
  }
  
  // Has check variable changed? (If no = prime number, if yes = not prime)
  if (count == 0) {
    primeYesNo = 0;
    
    return primeYesNo;
  } else {
    primeYesNo = 1;
    
    return primeYesNo;
  }
}

void printFunction(int iRandom, int primeYesNo) {
  if (primeYesNo == 0) {
    cout << endl;
    cout << iRandom << " is prime." << endl << endl;
  } else {
    cout << endl;
    cout << iRandom << " is not prime." << endl << endl;
  }
}

int lessThanTen(int iRandom) {
  if (iRandom < 10) {
    cout << iRandom << " is less than 10, so adding 10 to it." << endl;
    iRandom = iRandom + 10;
    
    return iRandom;
  }
  
  return iRandom;
}