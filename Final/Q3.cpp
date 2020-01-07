/*
Week 8 Final: Q3
James Lee Kennedy, 2 Jan 20
CS 265
*/
/*
Instructions:
Write C++ statements that do the following:
a.Define an enum type, birdType, with the values PEACOCK, SPARROW, CANARY,PARROT, PENGUIN, OSTRICH, EAGLE, CARDINAL, and HUMMINGBIRD.
b.Declare a variable bird of the type birdType.
c.Assign CANARY to the variable bird.
d.Advance bird to the next value in the list.
e.Decrement bird to the previous value in the list.
f.Output the value of the variable bird.
g.Input value in the variable bird
*/

#include <iostream>
using namespace std;

// a) enum birdType defiend with the following values:
enum birdType {
  PEACOCK, SPARROW, CANARY, PARROT, PENGUIN, OSTRICH, EAGLE, CARDINAL, HUMMINGBIRD
};

// Start the main() function
int main() {
  // b) Declare a variable bird of the type birdType.
  birdType bird;
  
  // c) Assign CANARY to the variable bird.
  bird = CANARY;
  
  // d) Advance bird to the next value in the list
  bird = static_cast <birdType> (int (bird) + 1);
  
  // e) Use switch statement to Output the value of the variable bird
  switch (bird) {
    case PEACOCK: std::cout << "PEACOCK\n"; break;
    case SPARROW: std::cout << "SPARROW\n"; break;
    case CANARY: std::cout << "CANARY\n"; break;
    case PARROT: std::cout << "PARROT\n"; break;
    case PENGUIN: std::cout << "PENGUIN\n"; break;
    case OSTRICH: std::cout << "OSTRICH\n"; break;
    case EAGLE: std:: cout << "EAGLE\n"; break;
    case CARDINAL: std:: cout << "CARDINAL\n"; break;
    case HUMMINGBIRD: std:: cout << "HUMMINGBIRD\n"; break;
  }
  
  return 0;
}