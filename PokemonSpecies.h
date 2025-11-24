
#pragma once
#include <string>
#include <vector>
#include "Move.h"
#include "Type.h"
#include "Pokemon.h"

class PokemonSpecies {
public:
    PokemonSpecies(size_t id, string name, unsigned int hp, unsigned int spAttack, unsigned int spDefense, unsigned int speed);
   
    string getName();
    unsigned int getHp();
    unsigned int getSpAttack();
    unsigned int getSpDefense();
    unsigned int getSpeed();
    
private:
    size_t id_;
    string name_;
    unsigned int hp_;
    unsigned int spAttack_;
    unsigned int spDefense_;
    unsigned int speed_;
    
    friend std::ostream& operator<<(std::ostream& os, const PokemonSpecies& pokemonSpecies);
};

enum POKEMON_ID: size_t {
    CHARMANDER,
    PIKACHU,
    SQUIRTLE,
    JIGGLYPUFF,
    
    NUM_POKEMON
};

extern const PokemonSpecies PokemonDb[NUM_POKEMON];
