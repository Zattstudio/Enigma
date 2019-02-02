#include "RotorSystem.h"

#define LOG(component, message) if(m_Verbose) std::cout << component << " -> " message << std::endl


RotorSystem::RotorSystem(int rotorCount, bool verbose){
    m_Verbose = verbose;
    for(int counter = 0; counter < rotorCount; counter++){
        m_Rotors.push_back(new Rotor(0));
    }
    this->initRotor(0, rotorScramble1);
    this->initRotor(1, rotorScramble2);
    this->initRotor(2, rotorScramble3);
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

void RotorSystem::initRotor(int rotorIndex, std::vector<int> wiring){
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

char RotorSystem::fullProcessLetter(char letter){
    int character = letter - 65; //convert capital letter to int
    // Iterate forwards through the rotors and convert the letter for each
    for(unsigned i = 0; i < m_Rotors.size(); i++){
        character = m_Rotors.at(i)->convertLetter(character);
        //Debug logging only if set
        LOG("Rotor " + i, "returned index at: " + character);
    }
    // Reflect the letter 
    character = reflectorConvertLetter(character);

    LOG("Reflector", "returned: " + character);
    LOG("Enigma", "Reflector done; now running backwards");
    //Run through the rotors backwards
    for(unsigned i = m_Rotors.size(); i > 0; i--){
        character = m_Rotors.at(i-1)->convertLetterReverse(character);
        //Debug logging
        LOG("Rotor " + i, "returned: " + character);
    }
    //Turn rotors
    this->turnRotors();
    LOG("Enigma", "Rotors turned");
    return character + 65;
}