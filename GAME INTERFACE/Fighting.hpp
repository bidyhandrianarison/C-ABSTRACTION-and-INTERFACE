#include"Jeu.hpp"
#ifndef FIGHTING_HPP
#define FIGHTING_HPP
#include<iostream>
using namespace std;
class Fighting:public Jeu
{
    public:
        Fighting();
        void begin();
        void cancel();
      /*  int getLifeRemaining();
        string getPlayerName();
        void setLifeRemaining(int life);
        void setPlayerName(string playerName);
  */  private:
        int lifeRemaining;
        string playerName;
};
#endif