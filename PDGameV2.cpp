//
// Created by da0ma on 11/10/2026.
//

#include "PDGameV2.h"


PDGameV2::PDGameV2(std::string playerName) : PDGame() {
m_playerName = "";
}
std::string PDGameV2::getPlayerName() {

}
void PDGameV2::playGame() {

}
void PDGameV2::displayRules() {

}

PDGame::PDGame() {
    m_gameOver = false;
    m_gameScore = 0;
    m_myTurn.setparentGame(this);
    displayRules();
    playGame();
}

void PDGame::displayRules() {
    std::cout << "Rules of Pig Dice:" << std::endl;
    std::cout << "1. Roll a dice, and try to get to 20 score in the fewest amount of Turns." << std::endl;
    std::cout << "2. Your turn ends when you Hold, or if you roll a 1." << std::endl;
    std::cout << "3. If you roll a 1, you lose all points for the current turn." << std::endl;
    std::cout << "4. Holding will save all the points you've gathered, but end the turn." << std::endl;
    std::cout << std::endl;
}

void PDGame::playGame() {
    while (m_gameOver == false) {
        m_myTurn.takeTurn();
        m_gameScore += m_myTurn.getscoreThisTurn();

        if (m_gameScore >= 20) {
            m_gameOver = true;
        }
        else {
            m_myTurn.resetturnOver();
            m_myTurn.resetscoreThisTurn();
        }
    }
    std::cout << std::endl << "You won!" << std::endl;
    std::cout << "You finished with " << m_gameScore << " in " << m_myTurn.getTurnCount() << " turns.\n";
}

int PDGame::getgameScore() const {
    return m_gameScore;
}