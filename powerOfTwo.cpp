// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz
// Created on: Apr 2022
// This program ask the user to enter a whole number
// and then uses a for loop to display the pow of each number
// from 0 to the user number.

#include <iostream>
#include <cmath>


int main() {
  // initialize the loopCounter and powerOfTwo.
  int powerOfTwo = 1;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

    try {
    // convert from string to int
     userNum = std::stoi(userNumString);

       if (userNum >= 0) {
           // calculate the square of each number, starting from 0 until that
           // number
           for (int loopCounter = 0; loopCounter <= userNum; loopCounter++) {
                powerOfTwo = pow(loopCounter, 2);
                std::cout << loopCounter << "^2 = " <<powerOfTwo<< std::endl;
           }
      } else {
          std::cout << " Please enter a whole number"
                << std::endl;
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout  <<  " Invalid input.";
  }
}
