//
// Created by da0ma on 11/10/2026.
//

#ifndef PIGDICE3_0_MULTIPLAYERGAME_H
#define PIGDICE3_0_MULTIPLAYERGAME_H
#include "PDGameV2.h"
#include <vector>
#include <iostream>

class MultiPlayerGame {
private:
    std::vector<PDGameV2> m_players;
    bool m_gameOver;
public:
    MultiPlayerGame() {
        m_gameOver = false;
        int count = 0;
        std::string tempName;
        std::cout << "How many people are playing? ";
        std::cin >> count;
        std::cin.ignore();
        for (int i = 0; i < count; i++) {
            std::cout << "Enter player " << i + 1 << "'s name: ";
            std::getline(std::cin, tempName);
            auto *ptr = new PDGameV2(tempName);
            m_players.emplace_back(*ptr);
        }
    }

    void mpPlayGame() {
        m_players[0].displayRules();
    }

    void displayScoreBoard() {
        std::cout << "\n\n";
        for (int i = 0; i < m_players.size(); i++) {
            std::cout << m_players.at(i).getPlayerName() << " (Score)";
        }
    }

    void checkForWinner() {
        std::vector<int> over50(m_players.size());
        for (int i = 0; i < m_players.size(); i++) {
            if (m_players.at(i).getGameScore() >=50) {
                over50.at(i) = m_players.at(i).getGameScore();
                m_gameOver = true;
            }
        }
        if (m_gameOver) {
            auto;
        }
    }
}

#endif //PIGDICE3_0_MULTIPLAYERGAME_H
