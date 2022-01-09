#include <iostream>
#include <stdlib.h>
#include <time.h>

void doGuessingGame(int randomNumber) {
	int playerGuess;
	char playAgainInput;

	std::cout << "I'm thinking of a number between 0 and 100 \n";
	do {
		std::cout << "Guess: ";

		std::cin >> playerGuess;

		if (playerGuess > randomNumber) {
			std::cout << "\nGuess lower\n";
		} else if (playerGuess < randomNumber) {
			std::cout << "\nGuess higher\n";
		} else {
			std::cout << "Nice job!\n";
			std::cout << "\nPlayer again? (y/n)";
		}
	} while (randomNumber != playerGuess);
	std::cin >> playAgainInput;

	if (playAgainInput == 'y') {
		randomNumber = rand() % 100;
		doGuessingGame(randomNumber);
		playAgainInput = ' ';
	}
}

int main() {

	srand(time(NULL));
	int randomNumber = rand() % 100;

	doGuessingGame(randomNumber);

	return 0;
}
