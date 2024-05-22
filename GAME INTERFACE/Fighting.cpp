#include"Fighting.hpp"
Fighting::Fighting()
{

}
void Fighting::begin()
{

    cout<<"============================================="<<endl;
    cout<<"JEU DE COMBAT"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Votre nom: ";
    cin>>playerName;
    cout<<"Que le combat commence"<<endl;
    lifeRemaining=5;
}
void Fighting::cancel()
{
    cout<<"============="<<endl;
    cout<<"Fin du jeu"<<endl;
    cout<<"============="<<endl;
}