
#ifndef ROTOR_H_
#define ROTOR_H_

#include <vector>


class Rotor {
    public:
        Rotor( int setting );
        ~Rotor();
        enum Directions
        {
            Forward,
            Backward
        };
        bool turn();
        int getState();
        void setState(int state);
        void setWiring(std::vector<int> newWiring);
        int convertLetter(int letterToConvert, Directions direction);
    private:    
        int m_State;
        std::vector<int> m_Wiring;
};
#endif  // ROTOR_H_