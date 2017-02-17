#include <iostream>
#include <string> 
#include <vector>
#include "PFamiliasNobles.h"
#include "Dothraki.h"
#include "GuardiaReal.h"
#include "Starks.h"
#include "Lannister.h"
#include "Targaryen.h"
#include <string>
using namespace std;


int main(){

	Lannister lannis;
	Targaryen Targar;
	Starks Stark;

	int opc,opcAg; //opcion del menu
	string jefeStark
	int cantlobos;
	vector<Stark> Starks_Vector = new vector<Stark>();
	
	cout << "Ingrese la opción que desea:\n1.Agregar\n2.Listar\n3.Eliminar"
	cin >> opc;
	string animalem,lema,guerrero;
	int cant_int;

	switch(opc){
	
	case 1:
		cout << "Que tipo desea agregar?\n1.Starks\n2.Lannister\n3.Targaryen";
		cin >> opcAg;
		if (opcAg==1){
			Starks_Vector
			cout << "Ingrese el jefe de familia: ";
			cin >> jefeStark;
			cout << "Ingrese la cantidad de lobos: ";
			cin >> cantlobos;
			cout << "Ingrese animal emblema: ";
			cin >> animalem;
			cout << "Ingrese lema: ";
			cin >> lema;
			cout << "Ingrese el guerrero mas valioso: ";
			cin >> guerrero;
			cout << "Ingrese el numero de integrantes: ";
			cint >> cant_int;
			
			starks->setJefeFamilia(jefeStark);			
		
		}
	return;

	}

return 0;
}
