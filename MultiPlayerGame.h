//
// Created by da0ma on 11/10/2026.
//

#ifndef PIGDICE3_0_MULTIPLAYERGAME_H
#define PIGDICE3_0_MULTIPLAYERGAME_H
#include "PDGameV2.h"

class MultiPlayer {
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;
public:
    MultiPlayer();
    void mpPlayGame();
    void checkForWinner();
    void displayScoreBoard();
};


#endif //PIGDICE3_0_MULTIPLAYERGAME_H
