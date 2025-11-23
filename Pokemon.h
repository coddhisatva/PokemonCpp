#pragma once
#include <string>
#include <vector>
#include "Move.h"
#include "Type.h"


class Pokemon {
public:
    Pokemon(size_t id, unsigned int level=5);
    

private:
    unsigned int level_;
    size_t id_;
    //virtual string species_;
    string nickname_;
    //Todo: Type type_;*
    //Todo: Moves
};

enum POKEMON: size_t {
    CHARMANDER,
    PIKACHU,
    SQUIRTLE,
    JIGGLYPUFF,
    
    NUM_POKEMON
};

extern const Pokemon PokemonDb[NUM_POKEMON];
