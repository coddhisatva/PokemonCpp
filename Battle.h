#include "Pokemon.h"
#include "Move.h"
#include "Player.h"
#include "helpers.h"

class Battle {
public:
    Battle(Player& player, Trainer opponent);
    
    bool start();
    int loop();
private:
    Player player_;
    Trainer opponent_;
};

enum BATTLE_STATES : unsigned int {
    ONGOING,
    VICTORY,
    DEFEAT
};

enum TURN : bool {
    PLAYER, // 0
    OPPONENT // 1
};
