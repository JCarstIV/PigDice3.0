//
// Created by da0ma on 9/29/2026.
//
#ifndef PIGDIE2_DIE_H
#define PIGDIE2_DIE_H
#include <random>

class Die {
private: //learning, not needed in a class
    int m_dieValue;
public:
    Die();
    void rollDie();
    int getDieValue() const;
};


#endif //PIGDIE2_DIE_H