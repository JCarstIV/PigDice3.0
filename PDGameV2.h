//
// Created by da0ma on 10/6/2026.
//

#ifndef PIGDICE2_0_PDGAME_H
#define PIGDICE2_0_PDGAME_H
#include "Turn.h"

class PDGameV2 {
private:
    std::string m_playerName;
public:
    PDGameV2();
    std::string getPlayerName();
    void playGame();
    void displayRules();
};


#endif //PIGDICE2_0_PDGAME_H
