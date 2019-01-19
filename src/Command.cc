#include "Command.h"

Command::Command(std::string input){
    m_Base = input;
}
Command::~Command(){
    
}

void Command::parseCommand(){
}

//This is not an optimal approach to handling this
Command::Commands Command::getCommand(){
    if(m_Base == ":IK") return Command_Insert_Key;
    if(m_Base == ":PR") return Command_Print;
    if(m_Base == ":CLEAR") return Command_Clear;
    if(m_Base == ":Q") return Command_Quit;
    return Command_Invalid;
}