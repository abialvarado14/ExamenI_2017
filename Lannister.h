#include <iostream>
#include <string>
#include <vector>
#include "GuardiaReal.h"
using namespace std;

class Lannister{

	private:
		string jefe_familia;
		string animal_emblema;
		string lema;
		vector<GuardiaReal> ejercito;
		double dinero;
		int fuerza_montana;
		int cant_integrantes;

	public:
		Lannister();
		void setJefefamilia(string jefe);
		void setAnimal(string animal);
		void setLema(string Lema);
		void setdinero(int Dinero);
		void setFuerzaMontana(int fuerza);
		void setCantidadInt(int cantidad);
		string getJefe_familia();
		string getAnimalEmblema();
		string getLema();
		int getFuerza();
		int getCantidadIntegrantes();
		int getCantidadDinero();
};
