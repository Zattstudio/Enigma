#include "RotorSystem.h"



RotorSystem::RotorSystem(int rotorCount = 3){
    for(int counter = 0; counter < rotorCount; counter++){
        m_Rotors.push_back(new Rotor(0));
    }
}
RotorSystem::~RotorSystem(){
    m_Rotors.clear();
}
