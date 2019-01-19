#ifndef ROTOR_SCRAMBLE_H_
#define ROTOR_SCRAMBLE_H_

#include <vector>

std::vector<int> rotorScramble1;
std::vector<int> rotorScramble2;
std::vector<int> rotorScramble3;

void runRotorScramble(){
    //Rotor I
    rotorScramble1 = {4, 10, 12, 5, 11, 6, 3, 16, 21, 25, 13, 19, 14, 22, 24, 7, 23, 20, 18, 15, 0, 8, 1, 17, 2, 9};

    //Rotor II
    rotorScramble2 = {0, 9, 3, 10, 18, 8, 17, 20, 23, 1, 11, 7, 22, 19, 12, 2, 16, 6, 25, 13, 15, 24, 5, 21, 14, 4};

    //Rotor III
    rotorScramble3 = {14, 2, 17, 4, 18, 12 ,8, 13, 19, 21, 7, 11, 0, 16, 22, 5, 6, 15, 24, 10, 9, 20, 23, 3, 1, 25};
}


#endif  // ROTOR_SCRAMBLE_H_