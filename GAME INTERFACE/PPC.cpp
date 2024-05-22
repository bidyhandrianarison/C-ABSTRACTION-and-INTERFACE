#include"PPC.hpp"
PPC::PPC()
{
    score1=0;
    score2=0;
}
void PPC::begin()
{
    cout<<"============================================="<<endl;
    cout<<"PIERRE PAPIER CISEAU"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Nom du joueur 1:";
    cin>>playerName1;
    cout<<"Stratégie du joueur 1(Pierre-Papîer-Ciseau): ";
    cin>>strategy1;
    cout<<"Nom du joueur 2:";
    cin>>playerName2;
    cout<<"Stratégie du joueur 2(Pierre-Papîer-Ciseau): ";
    cin>>strategy2;
    if (strategy1==strategy2)
    {
        score1++;
        score2++;
    }
    else if (strategy1=="Pierre" && strategy2=="Papier")
    {
        score2+=3;
    }
    else if (strategy1=="Papier" && strategy2=="Pierre")
    {
        score1+=3;
    }
    else if (strategy1=="Pierre" && strategy2=="Ciseau")
    {
        score1+=3;
    }
    else if (strategy1=="Ciseau" && strategy2=="Pierre")
    {
        score2+=3;
    }
    else if (strategy1=="Papier" && strategy2=="Ciseau")
    {
        score2+=3;
    }
        else if (strategy1=="Ciseau" && strategy2=="Papier")
    {
        score1+=3;
    }
    else{
        cout<<"Veuillez réessayez, au moins l'un de vous a mal saisi son stratégie"<<endl;
    }   
}
void PPC::cancel()
{
    cout<<"==========="<<endl;
    cout<<"FIN DU JEU"<<endl;
    cout<<"==========="<<endl;
    cout<<"Score final: "<<playerName1<<":"<<score1<<"\t"<<playerName2<<":"<<score2<<endl;
}
string PPC::getPlayerName1()
{
    return playerName1;
}
string PPC::getPlayerName2()
{
    return playerName2;
}
string PPC::getStrategy1()
{
    return strategy1;
}
string PPC::getStrategy2()
{
    return strategy2;
}
int PPC::getScore1()
{
    return score1;
}
int PPC::getScore2()
{
    return score2;
}
void PPC::setStrategy1(string s)
{
    strategy1=s;
}
void PPC::setStrategy2(string s)
{
    strategy2=s;
}
void PPC::setPlayerName1(string nom)
{
    playerName1=nom;
}
void PPC::setPlayerName2(string nom)
{
    playerName2=nom;
}