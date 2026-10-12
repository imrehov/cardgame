#pragma once

#include <cstdint>
#include <ostream>

class CardValue
{
public:
	CardValue() = default;
	explicit CardValue(const int initialValue);

	bool operator==(const CardValue& other) const;
	bool operator<(const CardValue& other) const;

private:
	explicit operator std::string() const;

	friend std::ostream& operator<<(std::ostream& os, const CardValue& cardValue);

private:
	uint8_t value{ 1 };
};

