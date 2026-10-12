#include "deck.h"
#include <cstdint>

class CardGame{
    public:

    void play();

    private:

    Deck deck;

    uint8_t points;

    uint8_t inputChar;

};