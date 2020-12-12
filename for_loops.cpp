// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program calculates the square of each integer from 0 to the
//    accepted number

#include <iostream>
#include <string>
#include <cmath>

int main()  {
    // This program calculates the square of each integer from 0 to the
    //    accepted number

    std::string positiveIntegerString;
    int positiveInteger;
    int square = 0;
    int loopCounter = 0;

    std::cout << "This program can calculate the square of each integer from"
              << " 0 to the number you type." << std::endl;

    // input
    std::cout << "Enter in a positive integer: " << std::endl;
    std::cin >> positiveIntegerString;
    std::cout << "" << std::endl;

    // process and output
    try {
        positiveInteger = std::stoi(positiveIntegerString.c_str());

        if (positiveInteger >= 0) {
            for (loopCounter = 0; loopCounter <= positiveInteger;
                 loopCounter++) {
                square = pow(loopCounter, 2);
                std::cout << loopCounter << "²" << " = " << square << std::endl;
            }

        } else {
            std::cout << "This is a negative integer" << std::endl;
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
