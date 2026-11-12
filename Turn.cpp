//
// Created by da0ma on 10/6/2026.
//

#include <iostream>
#include "Turn.h"
#include "PDGame.h"



Turn::Turn() {
    m_turnCount = 0;
    m_scoreThisTurn = 0;
    m_turnOver = false;
    m_choice = '\0';
    m_myDie;
}

void Turn::takeTurn() {
    m_turnCount++;
    std::cout << "\nTurn " << m_turnCount << " - Current Score: " << m_parentGame->getgameScore();

    while (m_turnOver == false) {
        std::cout << "\nWould you like to Roll or Hold? (r/h):  ";

        while (m_choice != 'r' && m_choice != 'h') {
            std::cin >> m_choice;
            if (m_choice == 'r') {
                roll();
            }else if (m_choice == 'h') {
                m_turnOver = true;
            }else {
                std::cout << "Invalid character. Try again." << std::endl;
            }
        }
        m_choice = 'b';
    }
    std::cout << "Score gathered: " << m_scoreThisTurn << std::endl;
}

int Turn::getscoreThisTurn() const {
    return m_scoreThisTurn;
}

void Turn::resetturnOver() {
    m_turnOver = false;
}
int Turn::getTurnCount() {
    return m_turnCount;
}

void Turn::resetscoreThisTurn() {
    m_scoreThisTurn = 0;
}

void Turn::roll() {
    m_myDie.rollDie();
    std::cout << "Die: " << m_myDie.getDieValue();

    if (m_myDie.getDieValue() == 1) {
        std::cout << "\nRolled a 1. Lost turn score.\n";
        m_scoreThisTurn = 0;
        m_turnOver = true;
    } else {
        m_scoreThisTurn += m_myDie.getDieValue();
        std::cout << " - Current turn score: " << m_scoreThisTurn << std::endl;
    }
}

void Turn::setparentGame(PDGame* parentGame){
    m_parentGame = parentGame;
}