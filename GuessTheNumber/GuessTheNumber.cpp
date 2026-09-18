// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Forward declaration
#include "guesserGame.hpp"
#include "userInput.hpp"

int main()
{

    bool playAgain;

    do {

        std::cout << "Welcome To Samuel's Guessing Game\n\n\n\n"; 
        
        while (!setupGame());

        while (!guessTheNumber(fetchNumber("Make a guess!\n\n")));

        playAgain = fetchYesOrNo("\nPlay Again? (Y/N)\n\n");

    } while (playAgain);

    std::cout << "\nBye Bye!!!!\n\n";


}
