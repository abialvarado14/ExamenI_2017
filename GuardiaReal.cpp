#include<string>
#include<iostream>
#include"GuardiaReal.h"
using namespace std;

GuardiaReal::GuardiaReal(){
	nombre = "";
	edad = 0;
	tipo_soldado ="";
}

void GuardiaReal::setNombre(string name){
	nombre = name;
}

void GuardiaReal::setEdad(int nedad){
	edad = nedad;
}

void GuardiaReal::setTipo(string soldado){
	tipo_soldado = soldado;
}
string GuardiaReal::getNombre(){
	return nombre;
}
int GuardiaReal::getEdad(){
	return edad;
}
string GuardiaReal::getTipoSoldado(){
	return tipo_soldado;
}

