#include <string>

using namespace std;

#pragma once 

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
		string getSimbolo();
		string getLema();
		int getPersonas();
		int getDefensa();
		int getAtaque();
		void setNombre(string);
		void setSimbolo(string);
		void setLema(string);
		void setPersonas(int);
		void setAtaque(int);
		void setDefensa(int);
};


