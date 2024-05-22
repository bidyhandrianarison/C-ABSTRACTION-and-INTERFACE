//PPC=Pierre Papier Ciseau
#ifndef PPC_HPP
#define PPC_HPP
#include"Jeu.hpp"
#include<iostream>
using namespace std;
class PPC:public Jeu
{
    public:
        PPC();
        void begin();
        void cancel();
        string getStrategy1();
        string getPlayerName1();
        void setStrategy1(string s);
        void setPlayerName1(string nom);
        int getScore1();
        string getStrategy2();
        string getPlayerName2();
        void setStrategy2(string s);
        void setPlayerName2(string nom);
        int getScore2();
    private:
        string strategy1;
        string playerName1;
        string playerName2;
        string strategy2;
        int score1;
        int score2;
};
#endif  