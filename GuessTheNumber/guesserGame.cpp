#include <iostream>
#include <string>

//Forward Declaration
#include "guesserGame.hpp"
#include "utilities.hpp"
#include "userInput.hpp"

int secretNumber;

bool setupGame() {

	int min = fetchNumber("Please set the minimum range: ");

	if (min < 0) {
		
		std::cout << "\nPlease input a number greater than 0.\n\n";
		return false;
	}

	int max = fetchNumber("Please set the maximum range: ");

	if (max < min) {

		std::cout << "\nPlease input a number greater than the maximum.\n\n";
		return false;
	}

	secretNumber = randomInteger(min, max);

	std::cout << "\nGame initialized. You may play a game.\n\n";
	return true;
}

bool guessTheNumber(int guess) {

	if (guess == secretNumber) {

		std::cout << "\nGood job! You've guessed the secret number: " << secretNumber << "\n\n";

		return true;
	}

	if (guess > secretNumber) {

		std::cout << "\nThe secret number is lower than your guess.\n\n";

	}

	if (guess < secretNumber) {

		std::cout << "\nThe secret number is higher than your guess.\n\n";

	}

	return false;

}

