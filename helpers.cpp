#include <cassert>
#include "helpers.h"

int randInt(int lo, int hi) {
    static std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(lo, hi); // dist = distribution object
    return dist(rng);  // generate a number
}

void dataAsserts() {
    assert(levelUpMoves.size() == NUM_POKEMON && "levelUpMoves.size() != NUM_POKEMON");
}
