
#ifndef ROTOR_H_
#define ROTOR_H_

#include <vector>

class Rotor {
    public:
        Rotor( int setting );
        ~Rotor();
        bool turn();
        int getState();
        int getOutput(int input);
        void setState(int state);
        void setWiring(std::vector<int> newWiring);
    private:    
        int m_State;
        std::vector<int> m_Wiring;
};
#endif  // ROTOR_H_