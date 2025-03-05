// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on February 2025
// This program calculates circumferences with user input

#include <iostream>

int main() {
    // Define the constant TAU directly in the main program
    const float TAU = 6.28;

    float radius;

    // Ask the user for the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the circumference using the TAU constant
    float circumference = TAU * radius;

    // Output the result
    std::cout << "The circumference of the circle is: " << circumference << std::endl;

    return 0;
}
