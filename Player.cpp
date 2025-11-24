
#include "Player.h"


Player::Player(std::string name)
: Trainer(name, {})
{};

void Player::addToParty(Pokemon pokemon) {
    party_.push_back(pokemon);
}




