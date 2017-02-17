#include <string>

using namespace;

#ifndef "PFAMILIASNOBLES_H"
#define "PFAMILIASNOBLES_H"

class PFamiliasNobles{
	private:
		string nombre;
		string simbolo;
		string lema;
		int cant_personas;
		int ataque;
		int defensa;
	public:
		PFamiliasNobles();
		~PFamiliasNobles();

		string getNombre();
		string getSimbolo;
		string getLema();
		int getPersonas();
		int getPersonas();
		int getDefensa();
		void setNombre(string);
		void setSimbolo(string);
		void setLema(string);
		void setPersonas(int);
		void defensa(double);
		void ataque(double);
};

#endif
