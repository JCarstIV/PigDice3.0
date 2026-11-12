//
// Created by da0ma on 10/6/2026.
//

#ifndef PIGDICE2_0_TURN_H
#define PIGDICE2_0_TURN_H
#include "DIE.h"

class PDGame;

class Turn {

private:
    int m_turnCount;
    int m_scoreThisTurn;
    bool m_turnOver;
    char m_choice;
    Die m_myDie;
    PDGame* m_parentGame = nullptr;
public:
    Turn();
    void takeTurn();
    int getscoreThisTurn() const;
    void resetturnOver();
    int getTurnCount();
    void resetscoreThisTurn();
    void setparentGame(PDGame* parentGame);
private:
    void roll();
};



#endif //PIGDICE2_0_TURN_H
