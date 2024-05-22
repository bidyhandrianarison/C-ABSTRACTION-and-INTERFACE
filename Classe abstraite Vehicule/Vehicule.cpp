#include"Vehicule.hpp"
#include<iostream>
using namespace std;
void Vehicule::display()
{
	cout<<"Marque:"<<marque<<endl;
	cout<<"Vitesse maximum: "<<vitesse<<endl;
	cout<<"Destination: "<<destination<<endl;
		
};
void Vehicule::setMarque(string nom)
{
	marque=nom;
}
string Vehicule::getMarque()
{
	return marque;
}