#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include<iostream> 
using namespace std;
class Vehicule
{
	public:
		void display();
		virtual void conduire(float vitesse,string destination)=0;
		void setMarque(string nom);	
		string getMarque();
	protected:
		string marque;
		float vitesse;
		string destination;
};
#endif
