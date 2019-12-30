/*
Week 2 Assignment: Reading & Writing Files
James Lee Kennedy, 20 Nov 2019
CS 265
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
  // Variable Declaration
  double distanceTravel, travelTime, averageSpeed;
  int numofCoffeeCupsSold;
  double coffeeCupCost, salesAmt;
  string firstName, lastName, department;
  double grossSalary, bonus, taxRate, bonusPerecent, taxRatePercent, payCheck, netCheck, netBonus;
  
  // Stream Objects
  ifstream inFile;
  ofstream outFile;
  
  // Opening Input file
  inFile.open("inData.txt");
  // Opening Output file
  outFile.open("outData.txt");
  
  // Reading Data from File
  inFile >> firstName >> lastName >> department;
  inFile >> grossSalary >> bonusPerecent >> taxRatePercent;
  inFile >> distanceTravel >> travelTime;
  inFile >> numofCoffeeCupsSold >> coffeeCupCost;
  
  // Closing Inut File
  inFile.close();
  
  // Calculations
  bonus = grossSalary * bonusPerecent / 100;
  taxRate = grossSalary * (taxRatePercent / 100);
  netCheck = grossSalary - taxRate;
  netBonus = bonus - (bonus * taxRatePercent / 100);
  payCheck = netCheck + netBonus;
  averageSpeed = distanceTravel / travelTime;
  salesAmt = numofCoffeeCupsSold * coffeeCupCost;
  
  // Writing to Output File
  outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
  outFile << fixed << setprecision(2) << "Monthly Gross Salary: $" << grossSalary << ", Monthly Bonus: " << bonusPerecent << "%, Taxes: " << taxRatePercent << "%" << endl;
  outFile << "Paycheck: $" << payCheck << endl;
  outFile << "Distance Traveled: " << distanceTravel << " miles, Traveling Time: " << travelTime << " hours" << endl;
  outFile << "Averavge Speed: " << averageSpeed << " miles per hour" << endl;
  outFile << "Number of Coffe Cups Sold: " << numofCoffeeCupsSold << ", Cost: $" << coffeeCupCost << " per cup" << endl;
  outFile << "Sales Amount = $" << salesAmt << endl;
  
  // Closing Output File
  outFile.close();
  return 0;
}