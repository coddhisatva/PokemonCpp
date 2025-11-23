
#pragma once
#include "Pokemon.h"
#include "Move.h"
#include "Type.h"
#include <cassert>
#include <string>
#include <unordered_map>
#include <vector>
using std::string;
using std::unordered_map;
using std::vector;

void dataAsserts() {
    assert(levelUpMoves.size() == NUM_POKEMON && "levelUpMoves.size() != NUM_POKEMON");
}

void createAllMoves();

class Game {
public:
    void run(string command);
    
private:
    void chooseStarter();
};





