#include<string>
#include<iostream>
#pragma once
using namespace std;

class GuardiaReal{
	private:
		string nombre;
		int edad;
		string tipo_soldado;
	public:
		GuardiaReal();
		void setNombre(string name);
		void setEdad(int nedad);
		void setTipo(string soldado);
		string getNombre();
		int getEdad();
		string getTipoSoldado();
};
