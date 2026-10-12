#include "../include/deck.h"

#include <algorithm>
#include <random>

Deck::Deck()
{
	//for (size_t idx = 0; idx < 52; ++idx) {
	//	cards[idx] = Card{ static_cast<Suit>(idx % 4), static_cast<int>(idx / 4 + 1) };
	//}

	Suit suit{ Suit::Clubs };
	int value{ 1 };
	std::generate(cards.begin(), cards.end(), [&suit, &value]() {
		if (value > 13) {
			value = 1;
			suit++;
		}
		return Card{ suit, value++ };
		});

	std::shuffle(cards.begin(), cards.end(), std::default_random_engine{ 42 });
}

const Card& Deck::operator[](const int& i) const{
	return cards[i];
}