#pragma once
#include "Pokemon.h"
#include "Trainer.h"
#include <string>

class Trainer {
    
public:
    Trainer(std::string name, std::initializer_list<Pokemon> party);
    
    Pokemon& sendOutPokemon();
    
    string getName();
    
    size_t getPartySize();
    
protected:
    std::string name_;
    
    std::vector<Pokemon> party_;
    
private:
    
    
};

