#include <iostream>
#include <string>
#include "RotorSystem.h"
#include "Plugboard.h"
#include "Command.h"

RotorSystem* rs;
Command* instruction;

void runLetter(){
    char currentLetter = plugboardConvert( instruction->getArg(0) );
    std::cout << currentLetter << std::endl;
    rs->turnRotors();
}


int main(){
    bool quit = false;
    std::string result = "";

    rs = new RotorSystem(3);


    //Enter instruction input loop
    while(!quit){
        std::cout << ':'; //Print instruction indicator
        std::string input;
        getline(std::cin, input); //Get input


        instruction = new Command(input);
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
                rs->printStatus();
                break;
            
            case Command::Command_Set:
                rs->setRotor(instruction->getArg(0), instruction->getArg(1));
                break;

            case Command::Command_Insert_Key:
                runLetter();
                break;
            case Command::Command_Invalid:
            default:
                std::cout << "No valid command: \"" << input << "\"." << std::endl; 
                break;
        }
    }
    return 0;
}
