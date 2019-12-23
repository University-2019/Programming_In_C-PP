/*
Week 5 Assignment: Time Conversion
James Lee Kennedy, 19 Dec 19
CS 265 
*/
#include <iostream>
using namespace std;

// Function prototype
void input24(int& hours, int& minutes);
void input12(int& hours, int& minutes, char& type);
void output12(int hours, int minutes, char type);
void output24(int hours, int minutes);
void convertTo12Hour(int& hours, char& type);
void convertTo24Hour(int& hours, char& type);

int main() {
  // Declaring variables
  int hours;
  int minutes;
  char type;
  int ch;
  char answer;
  
  // Ask user for input
  do {
    cout << "Welcome to the time conversion program!";
    cout << "\n1) 12 Hours to 24 Hours";
    cout << "\n2) 24 Hours to 12 Hours";
    cout << "\n3) Exit";
    cout << "\nPlease Enter Your Choice: ";
    cin >> ch;
    
    // Call the methods
    if (ch == 1) {
      input12(hours, minutes, type);
      convertTo24Hour(hours, type);
      output24(hours, minutes);
    } 
    
    else if (ch == 2) {
      input24(hours, minutes);
      convertTo12Hour(hours, type);
      output12(hours, minutes, type);
    }
    
    else {
      break;
    }
    
    cout << "\nWould you like to preform another calculation? (y/n): ";
    cin >> answer;
  } while ((answer == 'Y') || (answer == 'y'));
  
  // Exit system
  system("PAUSE");
  return 0;
}

// Method definition of input24
void input24(int& hours, int& minutes) {
  cout << "\nEnter the hour for the 24-hour time: ";
  cin >> hours;
  
  cout << "\nEnter the minutes for the 24-hour time: ";
  cin >> minutes;
}

// Method definition of input12
void input12(int& hours, int& minutes, char& type) {
  cout << "\nEnter the hour for the 12-hour time: ";
  cin >> hours;
  
  cout << "\nEnter the minutes for the 12-hour time: ";
  cin >> minutes;
  
  cout << "\nIs this AM or PM? (Enter A for AM or P for PM): ";
  cin >> type;
}

// Displays a time in 12 hour notation
void output12(int hours, int minutes, char type) {
  cout << "\nThe time converted to 12-hour format is: ";
  
  if (type == 'P') {
    if (minutes < 10) cout << hours << ":00" << minutes << " P.M.";
    else cout << hours << ":" << minutes << " P.M.";
  }
  
  else {
    if (minutes < 10) cout << hours << ":00" << minutes << " A.M.";
    else cout << hours << ":" << minutes << " A.M.";
  }
}

// Displays a time in 24 hour notation
void output24(int hours, int minutes) {
  cout << "\nThe time converted to 24 hour format is: ";
  
  if (hours < 12)
    cout << hours << ":" << minutes;
  else cout << hours << ":" << minutes;
}

// Method definitation to convertTo12Hour
void convertTo12Hour(int& hours, char& type) {
  if (hours < 12) {
    type = 'A';
  } 
  
  else {
    hours -= 12;
    type = 'P';
  }
}

// Method definitation to convertTo24Hour
void convertTo24Hour(int& hours, char& type) {
  if (type == 'P') {
    hours = hours + 12;
  }
}