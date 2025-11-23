#include "Type.h"
#include <string>
using std::string;

Type::Type(size_t typeId)
: typeId_(typeId)
{}

const Type TypeDb[NUM_TYPES] = {
    Type("Normal"),
    Type("Fire"),
    Type("Water"),
    Type("Grass"),
    Type("Electric"),
    Type("Psychic"),
    Type("Fairy")
};

