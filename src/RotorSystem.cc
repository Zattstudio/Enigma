#include "RotorSystem.h"



RotorSystem::RotorSystem(int rotorCount){
    for(int counter = 0; counter < rotorCount; counter++){
        m_Rotors.push_back(new Rotor(0));
    }
}
RotorSystem::~RotorSystem(){
    m_Rotors.clear();
}

void RotorSystem::turnRotors(){
    bool kickNext = true;
    for(int rotor = 0; rotor < 3 && kickNext;rotor++){
        kickNext = m_Rotors[rotor]->turn();
    }
}

void RotorSystem::initRotor(int rotorIndex, int state, std::vector<int> wiring){
    m_Rotors.at(rotorIndex)->setState((int)state);
    m_Rotors.at(rotorIndex)->setWiring(wiring);
}

void RotorSystem::setRotor(int rotorIndex, int state){
    std::cout << "Supplied rotor: " << rotorIndex << " with value " << state << std::endl;
    m_Rotors.at(rotorIndex)->setState(state%26);

}


void RotorSystem::printStatus(){
    for(unsigned i=0; i<m_Rotors.size();i++)
        std::cout << "Rotor " << i << ": " << m_Rotors.at(i)->getState() << std::endl;
}
