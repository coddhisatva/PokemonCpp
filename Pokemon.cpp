
#include <string>
#include "Pokemon.h"
#include "Move.h"
using std::string;

Pokemon::Pokemon(size_t id, unsigned int level)
: id_(id), level_(level)
{
    //TODO: Set Moves based on Level
};


const Pokemon PokemonDb[NUM_POKEMON] = {
    {CHARMANDER},
    {PIKACHU},
    {SQUIRTLE},
    {JIGGLYPUFF}
};
