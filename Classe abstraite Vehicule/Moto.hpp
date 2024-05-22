#ifndef MOTO_HPP
#define MOTO_HPP
#include"Vehicule.hpp"
using namespace std;
class Moto:public Vehicule
{
	public:
		Moto();
		void conduire(float vitesse,string destination);	
	private:
		bool casque;
};
#endif
