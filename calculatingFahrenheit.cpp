// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that calculates fahrenheit from celsius

#include <iostream>

float celsiusNumber;
float fahrenheitNumber;

void fahrenheit() {
    // Calculates fahrenheit from celsius

    std::string celsiusText;
    try {
        std::cout << "Enter a temperature in celsius: ";
        std::cin >> celsiusText;
        std::cout << std::endl;
        celsiusNumber = std::stoi(celsiusText);
        fahrenheitNumber = celsiusNumber * (9.0 / 5.0) + 32.0;
        std::cout << celsiusNumber << "°C = " << fahrenheitNumber << "°F.";
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << celsiusText << " isn't a number.";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}

int main() {
    // Calls a function

    fahrenheit();
}
