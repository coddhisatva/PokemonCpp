#include <iostream>
#include <vector>
#include <string>
#include "game.h"
#include "Pokemon.h"
#include "PokemonSpecies.h"
#include "Battle.h"
#include "Trainer.h"

using std::cout;
using std::vector;
using std::endl;
using std::string;

Game::Game(string playerName)
: player_(playerName)
{};

void Game::run(string command) {
    cout << "Running game with command: " << command << '\n';
    
    dataAsserts();

};

/*Player Game::initPlayer() {
    string playerName = "Red";
    player_ = Player(playerName);
}*/

void Game::chooseStarter() {
    cout << "Choose your starter!" << '\n';
    cout << "Options:'\n'";
    size_t starter1 = CHARMANDER;
    size_t starter2 = PIKACHU;
    size_t starter3 = SQUIRTLE;
    size_t starterChoice;
    cout << PokemonDb[starter1] << " (1)'\n'" << PokemonDb[starter2] << " (2)'\n'" << PokemonDb[starter3] << " (3)'\n'";
    cout << "Select (1, 2, or 3): ";
    std::cin >> starterChoice;
    
    while (starterChoice != 1 && starterChoice != 2 && starterChoice != 3) {
        cout << starterChoice << " is invalid choice!";
        cout << PokemonDb[starter1] << " (1)'\n'" << PokemonDb[starter2] << " (2)'\n'" << PokemonDb[starter3] << " (3)'\n'";
        cout << "Please select (1, 2, or 3): ";
    }
    starterChoice_ = starterChoice;
    
    auto starter = std::make_unique<Pokemon>(starterChoice, 5);
    player_.addToParty(*starter);
};

void Game::rivalAppears() {
    cout << "Your rival has appeared!" << "'\n'" << rivalName << ": I wannna battle!'\n'";
    
    rivalBattle();
    return;
}

//TODO: Battle is it's own function (or maybe class), and Trainer is a class too
void Game::rivalBattle() {
    Trainer rival = Trainer(rivalName, {Pokemon(starterChoice_ + 1, 5)});
    
    Battle battle(player_, rival);
    battle.start();
    
    return;
}
