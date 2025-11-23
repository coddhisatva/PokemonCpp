#pragma once
#include <string>
using std::string;
class Type {
public:
    Type(string name);
private:
    
    size_t typeId_;
};

enum TYPE_ID {
    NORMAL,
    FIRE,
    WATER,
    GRASS,
    ELECTRIC,
    PSYCHIC,
    FAIRY,
    
    NUM_TYPES
};

extern const Type TypeDb[NUM_TYPES];
