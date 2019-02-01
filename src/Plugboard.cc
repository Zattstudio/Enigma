#include "Plugboard.h"
#include <iostream>

//Plugboard Wiring Config
char plugboardScramble[13][2] = {{'A', 'V'},{'B', 'X'},{'C', 'Y'},{'D', 'T'},{'E', 'P'},{'F', 'S'},{'G', 'Z'},{'H', 'W'},{'I', 'N'},{'J', 'O'},{'K', 'U'},{'L', 'R'},{'M', 'Q'}};

//This method will iterate through the wiring and will return the corresponding letter
char plugboardConvert(int input){
    //Return 0 if we have a char bigger than Z
    if(input > 25) return '0';
    

    char letter = input + 65;//we add 65 to get a valid ascii char

    for(int i=0; i < 13; i++){
        if(plugboardScramble[i][0] == letter){
            //Return the second letter if the first one matches the input
            return plugboardScramble[i][1];
        }
        else if(plugboardScramble[i][1] == letter){
            //Return the first letter if the second one matches the input
            return plugboardScramble[i][0];
        }
    }
    return '0';
}