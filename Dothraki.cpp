#include "Dothraki.h"
#include <string>
#include<iostream>
using namespace std;

Dothraki::Dothraki(){
	nombre = "";
	jefbarbaro="";
	name_caballo="";
	color_caballo="";
	defensa = 0;
	ataque = 0;
}

void Dothraki::setNombre(string nom){
	nombre = nom;
}

void Dothraki::setJefBarbaro(string n){
	jefbarbaro = n;
}

void Dothraki::setName_Cabllo(string nombre){
	name_caballo = nombre;
}

void Dothraki::setColor(string color){
	color_caballo = color;
}

void Dothraki::setDefensa(int ndefensa){
	defensa=ndefensa;
}

void Dothraki::setAtaque(int nataque){
	ataque = nataque;
}
string Dothraki::getNombre(){
	return nombre;
}

string Dothraki::getBarbaro(){
	return jefbarbaro;
}
string Dothraki::getNameCaballo(){
	return name_caballo;
}
string Dothraki::getColorCaballo(){
	return color_caballo;
}
int Dothraki::getDefensa(){
	return defensa;
}
int Dothraki::getAtaque(){
	return ataque;
}
