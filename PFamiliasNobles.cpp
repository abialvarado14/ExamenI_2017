#include "PFamiliasNobles.h"
#include<string>
using namespace;

void setSimbolo(string s){
	simbolo = s;
}

void setNombre(string name){
	nombre = name;
}

void setLema(string Lema){
	lema = Lema;
}

void setPersonas (int cant){
	cant_personas = cant;
}

void setDefensa (int def){
	defensa = def;
}

void setAtaque (int ataq){
	ataque = ataq;
}

string getNombre(){
	return nombre;
}

string getLema(){
	return lema;
}
string getSimbolo(){
	return simbolo;
}
int getPersonas(){
	return cant_personas;
}
int getDefensa(){
	return defensa;
}
int getAtaque(){
	return ataque;
}

