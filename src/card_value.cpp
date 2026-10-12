#include "../include/card_value.h"

#include <stdexcept>
#include <string>

CardValue::CardValue(const int initialValue)
	: value{ static_cast<uint8_t>(initialValue) }
{
	if (initialValue < 1 || initialValue > 13) {
		throw std::invalid_argument{ "CardValue must be constructed with a value between 1 and 13!" };
	}
}

bool CardValue::operator==(const CardValue& other) const
{
	return value == other.value;
}

bool CardValue::operator<(const CardValue& other) const
{
	return value < other.value;
}

CardValue::operator std::string() const
{
	switch (value) {
	case 1: return "Ace";
	case 11: return "Jack";
	case 12: return "Queen";
	case 13: return "King";
	default: return std::to_string(value);
	}
}

std::ostream& operator<<(std::ostream& os, const CardValue& cardValue)
{
	return os << static_cast<std::string>(cardValue);
}