#ifndef ROTOR_SYSTEM_H_
#define ROTOR_SYSTEM_H_

#include <vector>
#include "Rotor.h"
#include <iostream>

class RotorSystem {
    public:
        RotorSystem(int rotorCount = 3);
        ~RotorSystem();
        void turnRotors();
        void initRotor(int rotorIndex, int state, std::vector<int> wiring);
    private:
        std::vector<Rotor*> m_Rotors;
};
#endif  // ROTOR_SYSTEM_H_