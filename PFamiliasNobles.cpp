#include "PFamiliasNobles.h"
#include<string>
#include<iostream>

using namespace std;

PFamiliasNobles::PFamiliasNobles(){
	simbolo = "";
	nombre = "";
	lema = "";
	cant_personas = 0;
	defensa =0;
	ataque=0;
}

void PFamiliasNobles::setSimbolo(string s){
	simbolo = s;
}

void PFamiliasNobles::setNombre(string name){
	nombre = name;
}

void PFamiliasNobles::setLema(string Lema){
	lema = Lema;
}

void PFamiliasNobles::setPersonas (int cant){
	cant_personas = cant;
}

void PFamiliasNobles::setDefensa (int def){
	defensa = def;
}

void PFamiliasNobles::setAtaque (int ataq){
	ataque = ataq;
}

string PFamiliasNobles::getNombre(){
	return nombre;
}

string PFamiliasNobles::getLema(){
	return lema;
}
string PFamiliasNobles::getSimbolo(){
	return simbolo;
}
int PFamiliasNobles::getPersonas(){
	return cant_personas;
}
int PFamiliasNobles::getDefensa(){
	return defensa;
}
int PFamiliasNobles::getAtaque(){
	return ataque;
}
PFamiliasNobles::~PFamiliasNobles(){
	cout <<"Limpiando objeto" << this;
}

