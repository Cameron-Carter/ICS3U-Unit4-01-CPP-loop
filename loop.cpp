// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program loops as many times as the user says to

#include <iostream>
#include <string>

int main() {
    // This program loops
    std::string inputAsString;
    int inputAsInteger;
    int runningTotal = 0;
    int loopCounter = 0;

    // Input
    std::cout << "Enter how many times to loop: ";
    std::cin >> inputAsString;

    // Process and Output
    try {
        inputAsInteger = std::stoi(inputAsString);
        if (inputAsInteger > 0) {
            while (loopCounter < inputAsInteger) {
                loopCounter = loopCounter + 1;
                runningTotal = runningTotal + loopCounter;
            }
            std::cout << "\nThe sum of all positive integers from 1 to "
            << inputAsInteger << " is " << runningTotal << "." << std::endl;
        } else {
            std::cout << "" << std::endl;
            std::cout << inputAsString << " is not a positive integer";
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << inputAsString
        << " is not a valid integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
