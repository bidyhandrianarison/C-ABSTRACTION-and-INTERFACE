#include"Auto.hpp"
#include"Moto.hpp"
#include<iostream>
int main()
{
	Moto scooter;
	scooter.setMarque("JOG");
	scooter.conduire(150,"Analakely");
	scooter.display();
}
