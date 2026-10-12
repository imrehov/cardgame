#include "../include/suit.h"

#include <stdexcept>

std::string ToString(const Suit suit)
{
	switch (suit) {
	case Suit::Clubs: return "Clubs";
	case Suit::Diamonds: return "Diamonds";
	case Suit::Hearts: return "Hearts";
	case Suit::Spades: return "Spades";
	default: throw std::invalid_argument{ "Unknown Suit item." };
	}
}

std::ostream& operator<<(std::ostream& os, const Suit suit)
{
	return os << ToString(suit);
}

Suit& operator++(Suit& suit)
{
	return suit = static_cast<Suit>(static_cast<uint8_t>(suit) + 1);
}

Suit operator++(Suit& suit, int)
{
	Suit temp{ suit };
	++suit;
	return temp;
}