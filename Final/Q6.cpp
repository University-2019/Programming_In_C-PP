/*
Week 8 Final: Q6
James Lee Kennedy, 7 Jan 20
CS 265
*/

/*
Instructions:
a. Declare the variable destination of type tourType
b. Write C++ statements to store the following data in destination:
  cityName--Chicago, distance--550 miles, travelTime--9 hours and 30 minutes
c. Write the definition of a function to output the data stored in a variable of type tourType.
d. Write the definition of a value returning function that inputs data into a variable of type tourType.
e. Write the definition of a void function with a reference parameter of type tourType to input data in a variable of type tourType.
*/

#include <iostream>
#include <string>
using namespace std;

struct timeType {
  int hr;
  double min;
  int sec;
};

struct tourType {
  string cityName;
  int distance;
  timeType travelTime;
};
tourType destination;

tourType input() {
  cout << "Enter the city, distance and time in hour and minutes." << endl;
  
  cin >> destination.cityName;
  cin >> destination.distance;
  cin >> destination.travelTime.hr;
  cin >> destination.travelTime.min;
  
  return destination;
}

void display() {
  cout << "City is: " << destination.cityName << endl;
  cout << "Distance is: " << destination.distance << endl;
  cout << "Time in Hour is: " << destination.travelTime.hr << endl;
  cout << "Time in minutes is: " << destination.travelTime.min << endl;
}

void inputfunc(tourType * t) {
  tourType d;
  d.cityName = t -> cityName;
  d.distance = t -> distance;
  d.travelTime.hr = t -> travelTime.hr;
  d.travelTime.min = t -> travelTime.min;
}

int main() {
  input();
  inputfunc(& destination);
  display();
}