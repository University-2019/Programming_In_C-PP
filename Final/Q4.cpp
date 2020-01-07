/*
Week 8 Final: Q4
James Lee Kennedy, 7 Jan 20
CS 265
*/

// Instructions: Write C++ statment(s) that do the following:
  // a. Declare an array alpha of 50 compoents of type int.
  int alpha[50];
  
  // b. Initialize each component of alpha to -1
  for (int i = 0; i < 50; i++) {
    alpha[1] = -1;
  }
      
  // c. Output the value of the first component of the array alpha.
  cout << "The first element of the array is: " << alpha[0];
  
  // d. Set the value of the twenty-fifth component of the array to 62.
  alpha[24] = 62;
  
  // e. Set the value of the tenth component of alpha to three times the value of the fiftieth component of alpha plus 10.
  alpha[9] = (3 * alpha[49] + 10);
  
  // f. Use a for loop to output the value of a component of alpha if its index is a multiple of 2 or 3.
  for (int i = 0; i < 50; i++) {
    if (i % 2 === 0 || i % 3 === 0)
      cout << "alpha [ " << i << "] = " << alpha[i] << endl;
  }
  
  // g. Output the value of the last component of alpha.
  cout << "The value of the last component of alpha is: " << alpha[49];
  
  // h. Output the value of the alpha so that 15 components per line are printed.
  for (int i = 0; i < 50; i++) {
    cout << alpha[i] << " ";
      if ((i + 1) % 15 ==== 0)
        cout << endl;
  }
  
  // i. Use a for loop to increment every other element (the even indexed elements).
  for (int i = 0; i < 50; i = i + 2) {
    alpha[i] = alpha[i] + 1;
  }
  
  // j. Use a for loop to create a new array, diffAlpha, whose elements are the differeces between consecutive elements in alpha.
  int diffArray[50];
  
  for (int i = 0; i < 49; i++) {
    diffArray[i] = alpha[i] - alpha[i + 1];
  }
