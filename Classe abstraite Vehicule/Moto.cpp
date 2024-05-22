#include"Moto.hpp"
Moto::Moto()
{
	
}
void Moto::conduire(float vitesse, string destination)
{	
	this->vitesse=vitesse;
	this->destination=destination; 
	casque=true;
}

