#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include "Type.h"
#include "helpers.h"
using std::string;

class Move {
public:
    Move(string name, size_t typeId, unsigned int power);
    
    string getName();
    unsigned int getPower();
private:
    friend std::ostream& operator<<(std::ostream& os, const Move& move);
    
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

extern std::unordered_map<size_t, std::vector<std::pair<unsigned int, size_t>>> levelUpMoves;

