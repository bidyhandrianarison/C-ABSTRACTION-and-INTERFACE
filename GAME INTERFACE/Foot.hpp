#ifndef FOOT_HPP
#define FOOT_HPP
#include"Jeu.hpp"
#include<iostream>
using namespace std;
class Foot:public Jeu
{
    public:
        Foot();
        void begin();
        void cancel();
        void setTeamHome(string team);
        void setTeamAway(string team);
        string getTeamHome();
        string getTeamAway();
        string getStade(); 
        void setStade(string terrain);
        void setScoreTeamHome(int score);
        void setScoreTeamAway(int score);
        int getScoreTeamHome();
        int getScoreTeamAway();
    private:
        string teamHome;
        string teamAway;
        string stade;
        int scoreTeamHome;
        int scoreTeamAway;
};
#endif