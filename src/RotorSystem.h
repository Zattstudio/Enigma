#ifndef ROTOR_SYSTEM_H_
#define ROTOR_SYSTEM_H_

#include <vector>
#include "Rotor.h"
#include "Reflector.h"
#include "RotorScramble.h"
#include <iostream>

class RotorSystem {
    public:
        RotorSystem(int rotorCount, bool verbose);
        ~RotorSystem();
        void turnRotors();
        void initRotor(int rotorIndex, std::vector<int> wiring);
        void setRotor(int rotorIndex, int state);
        void printStatus();
        char fullProcessLetter(char letter);
    private:
        std::vector<Rotor*> m_Rotors;
        bool m_Verbose;
};
#endif  // ROTOR_SYSTEM_H_