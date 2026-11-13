//
// Created by da0ma on 10/6/2026.
//

#ifndef PIGDICE2_0_PDGAME_H
#define PIGDICE2_0_PDGAME_H
#include <iostream>
#include "PDGame.h"

class PDGame;

class PDGameV2:public PDGame {
private:
    std::string m_playerName;
public:
    PDGameV2(const std::string &playerName) {
        if (!playerName.empty()) {
            m_playerName = playerName;
        } else {
            int index=1;
            m_playerName = "Anonymous Player " + std::to_string(index);
            ++index;
        }
    }
    ~PDGameV2() {
        std::cout << "\nPDGameV2 object destroyed\n";
    }
    [[nodiscard]] std::string getPlayerName() const {
        return m_playerName;
    }
    void displayRules() {
        std::cout << "\nLet's Play PIG Dice!\n";
        std::cout << "\n* \n";
        std::cout << "\n* \n";
        std::cout << "\n* \n";
        std::cout << "\n* \n";
    }
    void playGame() override{
        m_myTurn.takeTurn();
        m_gameScore += m_myTurn.getScoreThisTurn();
        if (m_gamescore < 50) {
            m_myTurn.resetTurnOver();
            m_myTurn.resetScoreThisTurn();
        }
    }
};


#endif //PIGDICE2_0_PDGAME_H
