#pragma once

#include <cstdint>
#include <ostream>

enum class Suit : uint8_t
{
	Clubs,
	Diamonds,
	Hearts,
	Spades
};

std::ostream& operator<<(std::ostream& os, const Suit suit);

Suit& operator++(Suit& suit);

Suit operator++(Suit& suit, int);