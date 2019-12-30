/*
Week 7 Assignment: Airplane Seating
James Lee Kennedy, 30 Dec 2019
CS 265
*/

#include <iostream>
using namespace std;
int main() {
  char res[13][6];
  int i, j;
  int ch = 0;
  
  int row1 = 0, row2 = 0;
  int classChoice = 0;
  
  for (i = 0; i < 13; i++)
    for (j = 0; j < 6; j++)
      res[i][j] = '*';
      
// Ask user to choose a task
  do {
    cout << endl;
    cout << "1. Reserve Your Seat." << endl;
    cout << "2. Display Full Reservation Status." << endl;
    cout << "3. Exit" << endl << endl;
    cout << "Please Enter Your Choice: ";
    cin >> ch;
    
    switch(ch) {
      // Ask user to choose seating class
      case 1:
        cout << endl << "1. First Class" << endl;
        cout << "2. Business Class" << endl;
        cout << "3. Economy Class" << endl;
        cout << "Enter Your Choice: ";
        cin >> classChoice;
        
        switch(classChoice) {
          case 1:
            cout << endl << "You chose First Class.";
            row1 = 0; row2 = 1;
            break;
            
          case 2:
          cout << endl << "You chose Business Class.";
          row1 = 2, row2 = 6;
          break;
          
          case 3: 
          cout << endl << "You chose Economic Class.";
          row1 = 7; row2 = 12;
          break;
          
          default:
          cout << endl<< "Invalid choice. Please try again.";
          break;
        }
        
        cout << endl << "===================================";
        cout << endl;
        cout << endl << "* - Available Seats";
        cout << endl << "X - Occupied Seats";
        cout << endl;
        cout << endl << "Available seats for you are: " << endl;
        cout << endl;
        cout << "\t" << "Seat 1 Seat 2 Seat 3 Seat 4 Seat 5 Seat 6" << endl;
        
        for (i = row1; i <= row2; i++) {
          cout << "Row" << i + 1;
          
          for (j = 0; j < 6; j++) {
            cout << "\t" << res[i][j];
          }
          cout << endl;
        }
        
        // Ask user to choose row and seat number
        int seatRow, seat;
        cout << endl << "Enter desired row: ";
        cin >> seatRow;
        
        if (seatRow < (row1 + 1) || seatRow > (row2 + 1)) {
          cout << endl << "== Invalid row selected! Please try again. ==" << endl;
          system("pause");
          break;
        }
        
        cout << endl << "Enter desired seat number (1 - 6): ";
        cin >> seat;
        if (seat < 1 || seat > 6) {
          cout << endl << "== Invalid seat selected! Please try again. ==" << endl;
          default:
            cout << endl << "Invalid choice. Please try again.";
            system("pause");
            break;
        }
        
        if (res [seatRow - 1] [seat - 1] !='X') {
          res [seatRow - 1] [seat - 1] = 'X';
          
          // Confirms reservation
          cout << endl << "Seat has been reserved. Thank you.";
          cout << endl << "==================================" << endl;
          cout << endl;
        } else {
          // Denies seat reservation
          cout << endl << "==SEAT IS ALREADY OCCUPIED ==";
          cout << endl << "Please try again.";
          cout << endl;
          break;
        }
        system("pause");
        break;
        
        // Displays seating chart
        case 2:
          cout << endl;
          cout << endl << "* - Available Seats";
          cout << endl << "X - Occupied Seats";
          cout << endl;
          cout << endl << "\tSeat 1 Seat 2 Seat 3 Seat 4 Seat 5 Seat 6" << endl;
          
          for (i = 0; i < 13; i++) {
            cout << "Row " << i + 1;
            
            for (j = 0; j < 6; j++) {
              cout << "\t" << res[i][j];
            }
            cout << endl;
          }
          system("pause");
        
        case 3:
          break;
    }
  } while (ch != 3);
  return 0;
}