#include "Rotor.h"

Rotor::Rotor(int setting = 0){
    /*Create the rotor with the given
    setting. If no setting is passed in it will use 0 as the default*/
    this->m_State = setting;
}
Rotor::~Rotor(){
    //Todo: Implement destructor
}

//Rotating the rotor forward one step
bool Rotor::turn(){

    m_State += 1;

    /*If we complete one iteration of
    the rotor, we return 
    true to kick the next rotor by one step*/
    if(m_State == 26){
        m_State = 0;
        return true;
    }

    return false;
}

//This will return the currwent state of ths rotor
int Rotor::getState(){
    return this->m_State;
}

int Rotor::getOutput(int input){
    return this->m_Wiring.at(input);

}

void Rotor::setState(int state){
        this->m_State = state;
}

void Rotor::setWiring(std::vector<int> newWiring){
    this->m_Wiring = newWiring;
}