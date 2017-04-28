#include<string>
#include<iostream>
#pragma once 

using namespace std;
class Dothraki{

	private:
		string nombre;
		string jefbarbaro;
		string name_caballo;
		string color_caballo;
		int defensa;
		int ataque;
	public:
		Dothraki();

		void setNombre(string nom);
		void setJefBarbaro(string n);
		void setName_Cabllo(string nombre);
		void setColor(string color);
		void setDefensa(int ndefensa);
		void setAtaque (int nataque);
		string getNombre();
		string getBarbaro();
		string getNameCaballo();
		string getColorCaballo();
		int getDefensa();
		int getAtaque();
};
