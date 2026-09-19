#include <iostream>
#include <string>

// Forward declaration
#include "userInput.hpp"
#include "utilities.hpp"


/// <summary>
/// Grabs input from player & prints prompt.
/// Checks for integer
/// </summary>
/// <param name=prompt></param>
/// <returns>int</returns>
int fetchNumber(std::string prompt) {

    do {

        int number;

        // Displays the string prompt
        std::cout << prompt;

        // Only returns if the number is a double or a valid type to convert
        if (std::cin >> number) {
            return number;
        }

        std::cout << "Error: Please input a valid number.\n";

        // No number found so clear the cin error flag:
        std::cin.clear();
        // Ignore remaining user input to reset stream for the next try.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (true);

}

/// <summary>
/// Grabs input from player & prints prompt
/// Checks for Y or N
/// </summary>
/// <param name=prompt></param>
/// <returns>bool</returns>
bool fetchYesOrNo(std::string prompt) {

    // Clear remaining queue of inputs

    // No number found so clear the cin error flag:
    std::cin.clear();
    // Ignore remaining user input to reset stream for the next try.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    do {

        std::string input;

        // Displays the string prompt
        std::cout << prompt;

        // Grab input
        std::getline(std::cin, input);

        // Checks for spaces
        if (!doesStringInclude(input, " ")) {
            
            // If "Y" return true for yes
            if (input == "y" || input == "Y") return true;

            // If "N" return false for no
            if (input == "n" || input == "N") return false;

        }

        std::cout << "\n\nPlease type Y or N.\n\n";

    } while (true);

}