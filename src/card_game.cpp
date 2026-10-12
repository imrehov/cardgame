#include "../include/card_game.h"

#include <iostream>

void CardGame::play() {

    std::cout << "The first card in the deck is: " << deck[0] << std::endl;

	for (std::size_t i {1}; i < 52; ++i){
		std::cout <<"Type '+' if you think the next card is higher/equal, or '-' if you think it is lower/equal!";

		std::cin >> inputChar;

		switch (inputChar){
			case '+':
			if (deck[static_cast<int>(i)] >= deck[static_cast<int>(i - 1)]){
				++points;
				std::cout << "Correct, " << deck[static_cast<int>(i)] << "is greater than or equal to " << deck[static_cast<int>(i - 1)] << '\n';
			}
			else {
				std::cout << "Unlucky, " << deck[static_cast<int>(i)] << "is smaller than or equal to " << deck[static_cast<int>(i - 1)] << '\n';
			}
			break;
			case '-':
			if (deck[static_cast<int>(i)] <= deck[static_cast<int>(i - 1)]){
				++points;
				std::cout << "Correct, " << deck[static_cast<int>(i)] << "is smaller than or equal to " << deck[static_cast<int>(i - 1)] << '\n';
			}
			else {
				std::cout << "Unlucky, " << deck[static_cast<int>(i)] << "is greater than or equal to " << deck[static_cast<int>(i - 1)] << '\n';
			}
			break;
			default:
			break;
		}
	}

	std::cout << "You earned " << points << " points!" << std::endl;
}