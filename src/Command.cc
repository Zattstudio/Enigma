#include "Command.h"

Command::Command(std::string input){
    m_Base = input;
}
Command::~Command(){
    
}

int Command::getArg(unsigned index){
    if(index <= (m_Tokens.size()-1) || m_Tokens.size() <= 1){

        //Return the ascii value if IK is the command
        //we subtract 65 because alphabetical letters in ascii start at 65
        if(m_Tokens.at(0) == "IK") return m_Tokens.at(index+1).at(0) -65;

        //Return the int value else
        return std::stoi(m_Tokens.at(index+1));
    }
    return 0;
}

void Command::parseCommand(){
    std::stringstream check1(m_Base); 
      
    std::string token; 
    while(getline(check1, token, ' ')) 
    { 
        m_Tokens.push_back(token); 
    } 
}

//This is not an optimal approach to handling this
Command::Commands Command::getCommand(){
    if(m_Tokens.at(0) == "IK") return Command_Insert_Key;
    if(m_Tokens.at(0) == "PR") return Command_Print;
    if(m_Tokens.at(0) == "CLEAR") return Command_Clear;
    if(m_Tokens.at(0) == "Q") return Command_Quit;
    if(m_Tokens.at(0) == "SETR") return Command_Set;
    return Command_Invalid;
}