//
// Created by da0ma on 10/6/2026.
//

#ifndef PIGDICE2_0_PDGAME_H
#define PIGDICE2_0_PDGAME_H
#include "Turn.h"

class PDGame {
private:
    Turn m_myTurn;
    bool m_gameOver;
    int m_gameScore;
public:
    PDGame();
    int getgameScore() const;
private:
    static void displayRules();
public:
    virtual void playGame();
};


#endif //PIGDICE2_0_PDGAME_H
