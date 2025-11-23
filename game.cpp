#include <iostream>
#include <vector>
#include <string>
#include "game.h"

using std::cout;
using std::vector;
using std::endl;
using std::string;

void Game::run(string command) {
    cout << "Running game with command: " << command << '\n';
    
    dataAsserts();
    
    chooseStarter();
};

void Game::chooseStarter() {
    string playerName = "Red"
    auto player = std::make_unique<Player>(playerName);
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
        cout << starterChoice << " is invalid choice!"
        cout << PokemonDb[starter1] << " (1)'\n'" << PokemonDb[starter2] << " (2)'\n'" << PokemonDb[starter3] << " (3)'\n'";
        cout << "Please select (1, 2, or 3): ";
    }
    
    auto starter = std::make_unique<Pokemon>(starterChoice, 5);
    
};
