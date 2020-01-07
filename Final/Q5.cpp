/*
Week 8 Final: Q5
James Lee Kennedy, 7 Jan 20
CS 265
*/

/*
Instructions:
Write the code to store the number of cars sold by each salesperson in the array cars, output the total numbers of cars sold at the end of the month, and output the salesperson number selling the maximum number of cars. (Assume that the data is in the file cars.dat, and thst this file has been opend using the ifstream variable inFile.)
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
  int ind, max, cars[10], i = 0, sum = 0;
  ifstream inFile("cars.txt");
  
  while (inFile) {
    inFile >> cars[i];
    
    sum = sum + cars[i];
    i++;
  }
  
  cout << "Total cars sold: " << sum << endl;
  max = cars[0];
  
  for (i = 0; i < 10; i++) {
    if (cars[i] > max) {
      max = cars[i];
      ind = i;
    }
  }
  
  cout << "The salesperson that sold the most cars is: " << i + 1 << endl;
  inFile.close();
}