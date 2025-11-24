#pragma once
#include <string>
using std::string;
class Type {
public:
    Type(size_t typeId, string name);
private:
    
    size_t typeId_;
    string name_;
};

enum TYPE_ID: size_t {
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
