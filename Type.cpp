#include "Type.h"
#include <string>
using std::string;

Type::Type(size_t typeId, string name)
: typeId_(typeId), name_(name)
{};

const Type TypeDb[NUM_TYPES] = {
    Type(NORMAL, "Normal"),
    Type(FIRE, "Fire"),
    Type(WATER, "Water"),
    Type(GRASS, "Grass"),
    Type(ELECTRIC, "Electric"),
    Type(PSYCHIC, "Psychic"),
    Type(FAIRY, "Fairy")
};

