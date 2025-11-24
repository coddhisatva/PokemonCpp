

#include "Player.h"
#include "Trainer.h"


Trainer::Trainer(std::string name, std::initializer_list<Pokemon> party)
:   name_(name), party_(party)
{};

Pokemon& Trainer::sendOutPokemon() {
    return party_[0];
}

string Trainer::getName() {
    return name_;
}

size_t Trainer::getPartySize() {
    return party_.size();
}

std::vector<Pokemon> party;

