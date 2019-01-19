#include <iostream>
#include <string>
#include "Format.h"
#include "Plugboard.h"
#include "Command.h"

int main(){
    bool quit = false;

    while(!quit){

        std::string input;
        getline(std::cin, input);
        
        Command* instruction = new Command(input);

        switch(instruction->getCommand()){
            case Command::Command_Quit:
                quit = true;
                break;

            case Command::Command_Clear:
                break;

            case Command::Command_Print:
                break;

            case Command::Command_Invalid:
            default:
                std::cout << "No valid command: \"" << input << "\" " << std::endl; 
                break;
        }
    }
    return 0;
}