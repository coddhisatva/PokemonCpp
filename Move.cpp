#include "Move.h"
#include "Pokemon.h"
#include <string>
#include "Type.h"
#include <unordered_map>
#include <vector>
#include <cassert>
using std::unordered_map;
using std::string;

Move::Move(string name, size_t typeId, unsigned int power)
: name_(name), typeId_(typeId), power_(power)
{}

const Move MOVE_DB[NUM_MOVES] = {
    Move("Swift", NORMAL, 60),
    Move("Ember", FIRE, 40),
    Move("Thunderbolt", ELECTRIC, 90),
    Move("Hydro Cannon", WATER, 150),
    Move("Retro Amnesia", PSYCHIC, 0)
};

unordered_map<int, std::vector<std::pair<size_t, size_t>>> levelUpMoves = {
    { CHARMANDER,
        {
            {1, SWIFT},
            {5, EMBER}
        }
    },
    
    { PIKACHU,
        {
            {1, THUNDERBOLT},
            {5, SWIFT},
            {6, HYDRO_CANNON}
        }
    },
    
    { SQUIRTLE,
        {
            {1, SWIFT},
            {5, HYDRO_CANNON}
        }
    },
    
    { JIGGLYPUFF,
        {
            {}
        }
    }
};




