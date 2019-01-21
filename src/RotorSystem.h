#ifndef ROTOR_SYSTEM_H_
#define ROTOR_SYSTEM_H_

#include <vector>
#include "Rotor.h"
#include <iostream>

class RotorSystem {
    public:
        RotorSystem(int rotorCount);
        ~RotorSystem();
        void turnRotors();
        void initRotor(int rotorIndex, int state, std::vector<int> wiring);
        void setRotor(int rotorIndex, int state);
        void printStatus();
    private:
        std::vector<Rotor*> m_Rotors;
};
#endif  // ROTOR_SYSTEM_H_