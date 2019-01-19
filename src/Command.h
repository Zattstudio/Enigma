#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <string>
#include <iostream>
//This file holds the enumerated type for commands

class Command{
    public:
        Command(std::string input);
        ~Command();
        void parseCommand();
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
        char m_Arg;
        std::string m_Base;
};

#endif // _COMMAND_H_