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
				correct(deck[static_cast<int>(i)], deck[static_cast<int>(i - 1)]);
			}
			else {
				unlucky(deck[static_cast<int>(i)], deck[static_cast<int>(i - 1)]);
			}
			break;
			case '-':
			if (deck[static_cast<int>(i)] <= deck[static_cast<int>(i - 1)]){
				++points;
				correct(deck[static_cast<int>(i)], deck[static_cast<int>(i - 1)], false);
			}
			else {
				unlucky(deck[static_cast<int>(i)], deck[static_cast<int>(i - 1)], false);
			}
			break;
			default:
			break;
		}
	}

	std::cout << "You earned " << points << " points!" << std::endl;
}

void CardGame::correct(const Card& first, const Card& second, bool higher) const{
	if (higher) {
		std::cout << "Correct, " << first << " is greater than or equal to " << second << '\n';
	}
	else {
		std::cout << "Correct, " << first << " is smaller than or equal to " << second << '\n';
	}

}

void CardGame::unlucky(const Card &first, const Card &second, bool higher) const{
	if (higher) {
		std::cout << "Unlucky, " << first << " is smaller than or equal to " << second << '\n';
	}
	else {
		std::cout << "Unlucky, " << first << " is greater than or equal to " << second << '\n';
	}
}