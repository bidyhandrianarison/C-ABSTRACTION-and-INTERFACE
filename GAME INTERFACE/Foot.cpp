#include"Jeu.hpp"
#include"Foot.hpp"
#include<iostream>
using namespace std;
Foot::Foot()
{
}
void Foot::begin()
{
    cout<<"============================================="<<endl;
    cout<<"JEU FOOT"<<endl;
    cout<<"============================================="<<endl;
    scoreTeamHome=0;
    scoreTeamAway=0;
    cout<<"Equipe a domicile: ";
    cin>>teamHome;
    cout<<"Equipe a l exterieur: ";
    cin>>teamAway;
    cout<<"Terrain: ";
    cin>>stade;
}
string Foot::getTeamHome()
{
    return teamHome;
}

string Foot::getTeamAway()
{
    return teamAway;
}

string Foot::getStade()
{
    return stade;
}

int Foot::getScoreTeamHome()
{
    return scoreTeamHome;
}

int Foot::getScoreTeamAway()
{
    return scoreTeamAway;
}
void Foot::setScoreTeamHome(int score)
{
    scoreTeamHome=score;
}
void Foot::setScoreTeamAway(int score)
{
    scoreTeamAway=score;
}
void Foot::setStade(string terrain)
{
    stade=terrain;
}
void Foot::setTeamHome(string team)
{
    teamHome=team;
}
void Foot::setTeamAway(string team)
{
    teamAway=team;
}
void Foot::cancel()
{
    cout<<"===================="<<endl;
    cout<<"Fin du jeu"<<endl;
    cout<<"Score: "<<this->scoreTeamHome<<"-"<<this->scoreTeamAway<<endl;
    cout<<"===================="<<endl;
};
/*
void Foot::restart()
{
    begin();
}*/