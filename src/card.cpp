#include "../include/card.h"

Card::Card(const Suit s, const int v)
	: suit{ s }
	, value{ v }
{
}

bool Card::operator==(const Card& other) const
{
	return value == other.value;
}

bool Card::operator!=(const Card& other) const
{
	return !(*this == other);
}

bool Card::operator<(const Card& other) const
{
	return value < other.value;
}

bool Card::operator<=(const Card& other) const
{
	return *this < other || *this == other;
}

bool Card::operator>(const Card& other) const
{
	return !(*this <= other);
}

bool Card::operator>=(const Card& other) const
{
	return !(*this < other);
}

std::ostream& operator<<(std::ostream& os, const Card& card)
{
	return os << card.value << " of " << card.suit;
}