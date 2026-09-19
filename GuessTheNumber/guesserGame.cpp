#include <iostream>
#include <string>

//Forward Declaration
#include "guesserGame.hpp"
#include "utilities.hpp"
#include "userInput.hpp"

// Stored hidden number
int secretNumber;

/// <summary>
/// Boolean for setting up the game.
/// Place in a while loop to setup the game.
/// </summary>
/// <returns>Bool</returns>
bool setupGame() {

	// Grabs player's input for the minimum range
	int min = fetchNumber("Please set the minimum range: ");

	// Integer must be greater than 0
	if (min < 0) {
		
		std::cout << "\nPlease input a number greater than 0.\n\n";
		return false;
	}

	// Grabs player's input for the maximum range
	int max = fetchNumber("Please set the maximum range: ");

	// This integer must be greater than the minimum
	if (max < min) {

		std::cout << "\nPlease input a number greater than the maximum.\n\n";
		return false;
	}

	// Creates
	secretNumber = randomInteger(min, max);

	std::cout << "\nGame initialized. You may play a game.\n\n";
	return true;
}

/// <summary>
/// Boolean for playing the game.
/// Place in a while loop to play the game.
/// </summary>
/// <param name="guess"></param>
/// <returns>Bool</returns>
bool guessTheNumber(int guess) {

	// If guess is correct,then return true to end the game
	if (guess == secretNumber) {

		std::cout << "\nGood job! You've guessed the secret number: " << secretNumber << "\n\n";

		return true;
	}

	// If guess is higher then give a hint that the secret number is lower
	if (guess > secretNumber) {

		std::cout << "\nThe secret number is lower than your guess.\n\n";

	}

	// If guess is lower then give a hint that the secret number is higher
	if (guess < secretNumber) {

		std::cout << "\nThe secret number is higher than your guess.\n\n";

	}

	return false;

}

