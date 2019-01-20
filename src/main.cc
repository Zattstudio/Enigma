#include <iostream>
#include <string>
#include "Format.h"
#include "Plugboard.h"
#include "Command.h"

int main(){
    bool quit = false;
    std::string result = "";
    while(!quit){
        std::cout << ':';
        std::string input;
        getline(std::cin, input);
        
        Command* instruction = new Command(input);
        instruction->parseCommand();

        switch(instruction->getCommand()){
            case Command::Command_Quit:
                quit = true; //Terminates the program
                break;

            case Command::Command_Clear:
                result = "";
                std::cout << "Cleared output; rotors remain in their state." << std::endl;
                break;

            case Command::Command_Print:
                break;

            case Command::Command_Invalid:
            default:
                std::cout << "No valid command: \"" << input << "\"." << std::endl; 
                break;
        }
    }
    return 0;
}