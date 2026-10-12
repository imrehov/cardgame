#pragma once

#include "card_value.h"
#include "suit.h"

#include <ostream>

class Card
{
public:
	Card() = default;
	Card(const Suit suit, const int value);

	bool operator==(const Card& other) const;
	bool operator!=(const Card& other) const;
	bool operator<(const Card& other) const;
	bool operator<=(const Card& other) const;
	bool operator>(const Card& other) const;
	bool operator>=(const Card& other) const;

	friend std::ostream& operator<<(std::ostream& os, const Card& card);

private:
	Suit suit{ Suit::Clubs };
	CardValue value{};
};



