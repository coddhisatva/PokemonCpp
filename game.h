
#pragma once
#include "Pokemon.h"
#include "Move.h"
#include "Type.h"
#include <cassert>
#include <string>
#include <unordered_map>
#include <vector>
#include "Player.h"
using std::string;
using std::unordered_map;
using std::vector;

class Game {
public:
    Game(string playerName);
    void run(string command);
    void rivalAppears();
    void rivalBattle();
    void chooseStarter();
    
private:
    
    size_t starterChoice_;
    Player player_;
    Player initPlayer();
    string rivalName = "Stinky";
};





