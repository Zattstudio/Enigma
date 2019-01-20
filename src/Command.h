#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
//This file holds the enumerated type for commands

class Command{
    public:
        Command(std::string input);
        ~Command();
        void parseCommand();
        int getArg(unsigned index);
        enum Commands
        {
            Command_Insert_Key,
            Command_Print,
            Command_Clear,
            Command_Quit,
            Command_Invalid
        };
        //Here, the given string will be compared to the hardcoded commands and will return an Commands enum
        Commands getCommand();
    private:
        bool argumentNeeded();
        std::vector<std::string> m_Tokens;
        std::string m_Base;
};

#endif // _COMMAND_H_