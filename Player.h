#pragma once
#include "Pokemon.h"
#include "Trainer.h"
#include <string>

class Player : public Trainer {
    
public:
    Player(std::string name);
    void addToParty(Pokemon pokemon);

};

