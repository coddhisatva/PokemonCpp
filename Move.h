#pragma once
#include <string>
#include "Type.h"
using std::string;

class Move {
public:
    Move(string name, size_t typeId, unsigned int power);
private:
    
    
    unsigned int idx_;
    string name_;
    unsigned int power_;
    size_t typeId_;
};

enum MOVE_ID {
    SWIFT,
    EMBER,
    THUNDERBOLT,
    HYDRO_CANNON,
    RETRO_AMNESIA,
    
    NUM_MOVES
};

extern const Move MoveDb[NUM_MOVES];

unordered_map<int, std::vector<std::pair<int, size_t>>> levelUpMoves;

