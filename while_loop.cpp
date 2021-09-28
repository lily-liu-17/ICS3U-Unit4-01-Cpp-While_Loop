// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program uses while loop

#include <iostream>
#include <string>


int main() {
    // This function gives the sum of all the numbers icluudng the number given
    int loopCounter = 0;
    int total = 0;
    int userInput;
    std::string userInputString;

    // input
    std::cout << "Please a positive interger : ";
    std::cin >> userInputString;

    // process and output
    try {
        userInput = std::stoi(userInputString);
        while (loopCounter <= userInput) {
            total = total + loopCounter;
            loopCounter += 1;
        }
        std::cout << "The sum of all the integers from 1 to " << userInput <<
        " is " << total << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
