/*
Week 8 Assignment: Fruit Data
James Lee Kennedy, 31 Dec 19
CS 265
*/

#include <iostream>
#include <string>
using namespace std;

struct fruitType {
  string name;
  string color;
  int fat; 
  int sugar;
  int carbohydrate;  
};

int main() {
  struct fruitType obj;
  cout << "Tell me about the fruit: ";
  cout << endl << "Please enter the name of the fruit: ";
  cin >> obj.name;
  
  cout << "Please enter the color of the fruit: ";
  cin >> obj.color;
  
  cout << "What is the fat content? (numbers only): ";
  cin >> obj.fat;
  
  cout << "What is the sugar content? (numbers only): ";
  cin >> obj.sugar;
  
  cout << "What is the carbohydrate content? (numbers only): ";
  cin >> obj.carbohydrate;
  
  cout << "\nHere are the details about your fruit: ";
  cout << "\nName: " << obj.name;
  cout << "\nColor: " << obj.color;
  cout << "\nFat Content: " << obj.fat;
  cout << "\nSugar Content: " << obj.sugar;
  cout << "\nCarbohydrate Content: " << obj.carbohydrate;
  return 0;
}