#include "Pokemon.h"
#include "Move.h"
#include "Player.h"
#include "Battle.h"
#include "helpers.h"
#include <iostream>
using std::cout;
using std::cin;

Battle::Battle(Player& player, Trainer opponent)
: player_(player), opponent_(opponent)
{}

//returning false you lose, true u win
bool Battle::start() {
    auto& enemyPoke = opponent_.sendOutPokemon();
    cout << opponent_.getName() << " sent out " << enemyPoke.getNickname() << "!'\n'";
    auto& currentPoke = player_.sendOutPokemon();
    cout << player_.getName() << ": GO! " << currentPoke.getNickname() << '\n';
    
    while (player_.getPartySize() > 0 && opponent_.getPartySize() > 0) {
        cout << opponent_.getName() << "'s " << enemyPoke.getNickname() << ": " << enemyPoke.getCurrHp() << " / " << enemyPoke.getMaxHp() << " hp'\n'";
        cout << player_.getName() << "'s " << currentPoke.getNickname() << ": " << currentPoke.getCurrHp() << " / " << currentPoke.getMaxHp() << " hp'\n'";
        
        cout << "Your moves: ";
        currentPoke.printMoves();
        int moveSelect;
        cout << "Select a move: ";
        cin >> moveSelect;
        
        while (moveSelect < 0 || moveSelect >= currentPoke.getNumMoves()) {
            cout << moveSelect << " is invalid choice!";
            cout << "Your moves: ";
            currentPoke.printMoves();
            cout << "Select a move: ";
            cin >> moveSelect;
        }
        
        int cmp = (currentPoke.getSpeed() > enemyPoke.getSpeed()) -
                  (currentPoke.getSpeed() < enemyPoke.getSpeed());
        
        bool turn = PLAYER;
        switch (cmp) {
            case -1:
                //TODO: switch these
                turn = OPPONENT;
            case 0:
                //speed tie
                turn = randInt(0, 1);
            case 1:
                turn = PLAYER;
        }
        
        bool enemyFainted = false;
        bool playerFainted = false;
        
        for (int i = 0; i < 2; i++) {
            if (turn == OPPONENT) {
                cout << "enemy here" << std::endl;
                if (!enemyPoke.useMove(randInt(0, enemyPoke.getNumMoves() - 1), currentPoke)) {
                    playerFainted = true;
                    break;
                }
                turn = !turn;
            } else {
                cout << "Player here" << std::endl;
                if (!currentPoke.useMove(moveSelect, enemyPoke)) {
                    enemyFainted = true;
                    break;
                }
                turn = !turn;
            }
        }
        
        //Needs to be better just doing temporary for now, ignoring party size, next mons, etc
        if (playerFainted) {
            cout << "You lost!" << std::endl;
            return false;
        } else if (enemyFainted) {
            cout << "You win!" << std::endl;
            return true;
        }
        
        
        
    }
    return true;
}
