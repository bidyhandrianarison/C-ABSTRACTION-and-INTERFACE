#ifndef AUTO_HPP
#define AUTO_HPP
#include"Vehicule.hpp"
using namespace std;
class Auto:public Vehicule
{
	public:
		Auto();
		void conduire(float vitesse,string destination);	
};
#endif
