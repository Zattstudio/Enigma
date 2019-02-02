#include "Plugboard.h"
#include <iostream>

//Plugboard Wiring Config
char plugboardScramble[13][2] = {{'A', 'V'},{'B', 'X'},{'C', 'Y'},{'D', 'T'},{'E', 'P'},{'F', 'S'},{'G', 'Z'},{'H', 'W'},{'I', 'N'},{'J', 'O'},{'K', 'U'},{'L', 'R'},{'M', 'Q'}};

//This method will iterate through the wiring and will return the corresponding letter
char plugboardConvert(char input){
    //Return 0 if we have a char bigger than Z
    //if(((input-65) > 25)) return '0';
    


    for(int i=0; i < 13; i++){
        if(plugboardScramble[i][0] == input){
            //Return the second letter if the first one matches the input
            return plugboardScramble[i][1];
        }
        else if(plugboardScramble[i][1] == input){
            //Return the first letter if the second one matches the input
            return plugboardScramble[i][0];
        }
    }
    return '0';
}