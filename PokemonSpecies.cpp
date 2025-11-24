
#include <string>
#include "Pokemon.h"
#include "Move.h"
using std::string;

PokemonSpecies::PokemonSpecies(size_t id, string name, unsigned int hp, unsigned int spAttack, unsigned int spDefense, unsigned int speed)
: id_(id), name_(name), hp_(hp), spAttack_(spAttack), spDefense_(spDefense), speed_(speed)
{};

string PokemonSpecies::getName() {
    return name_;
};

unsigned int PokemonSpecies::getHp() {
    return hp_;
};

unsigned int PokemonSpecies::getSpAttack() {
    return spAttack_;
};

unsigned int PokemonSpecies::getSpDefense() {
    return spDefense_;
};

unsigned int PokemonSpecies::getSpeed() {
    return speed_;
};

const PokemonSpecies PokemonDb[NUM_POKEMON] = {
    PokemonSpecies(CHARMANDER, "Charmander", 11, 14, 12, 11),
    PokemonSpecies(PIKACHU, "Pikachu", 12, 13, 11, 11),
    PokemonSpecies(SQUIRTLE, "Squirtle", 13, 9, 14, 10),
    PokemonSpecies(JIGGLYPUFF, "Jigglypuff", 12, 12, 12, 9)
};

std::ostream& operator<<(std::ostream& os, const PokemonSpecies& pokemonSpecies) {
    os << pokemonSpecies.name_;
    return os;
};
