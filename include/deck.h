#pragma once

#include "card.h"

#include <array>
#include <memory>

class Deck
{
public:
	Deck();

	const Card& operator[](const int& i) const;

private:
	std::array<Card, 52> cards;
};

