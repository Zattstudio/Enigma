#include <iostream>
#include <string>
#include "RotorSystem.h"
#include "Plugboard.h"
#include "Command.h"

RotorSystem* rs;
Command* instruction;
std::string result = "";

void insertKeyPress(char key){

    key = plugboardConvert(key);
    key  = rs->fullProcessLetter(key);
    key = plugboardConvert(key);
    result += key;
    std::cout << "Got Letter: " << key << std::endl;
    }


int main(int argc, char *argv[]){
    bool quit = false;
    bool selfVerbose = argv[1] == "verbose";
    rs = new RotorSystem(3, selfVerbose);


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
                std::cout << "Output: " << result << std::endl;
                break;
            
            case Command::Command_Set:
                rs->setRotor(instruction->getArg(0), instruction->getArg(1));
                break;

            case Command::Command_Insert_Key:

                //We get back an int from the getArg function
                /*We have to convert it to a valid character before we proceed
                with the insert function*/ 
                insertKeyPress(instruction->getArg(0)+65);
                break;
            case Command::Command_Invalid:
            default:
                std::cout << "No valid command: \"" << input << "\"." << std::endl; 
                break;
        }
    }
    return 0;
}
