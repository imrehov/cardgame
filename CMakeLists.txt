cmake_minimum_required(VERSION 3.16)

project(cardgame LANGUAGES CXX)

add_executable(cardgame
    main.cpp
    src/card.cpp
    src/card_game.cpp
    src/card_value.cpp
    src/deck.cpp
    src/suit.cpp
)

target_include_directories(cardgame PRIVATE include)
target_compile_features(cardgame PRIVATE cxx_std_17)
