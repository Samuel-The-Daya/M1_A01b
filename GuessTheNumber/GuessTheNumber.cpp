// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Forward declaration
#include "guesserGame.hpp"
#include "userInput.hpp"

int main()
{

    // Gameplay Loop
    // Loop the game as long as player inputs Y
    do {

        std::cout << "Welcome To Samuel's Guessing Game\n\n\n\n"; 
        
        // Loop for setting up the game
        while (!setupGame());

        // Loop for playing the game
        while (!guessTheNumber(fetchNumber("Make a guess!\n\n")));

    } while (fetchYesOrNo("\nPlay Again? (Y/N)\n\n"));

    std::cout << "\nBye Bye!!!!\n\n";


}
