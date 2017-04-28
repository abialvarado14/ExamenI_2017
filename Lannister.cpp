#include<iostream>
#include <string>
#include "Lannister.h"
using namespace std;

Lannister::Lannister(){
	jefe_familia ="";
	animal_emblema="";
	lema="";
	dinero =0.0;
	fuerza_montana=0;
	cant_integrantes=0;
}

void Lannister::setJefefamilia(string jefe){
	jefe_familia = jefe;
}

void Lannister::setAnimal(string animal){
	animal_emblema = animal;
}

void Lannister::setLema(string Lema){
	lema = Lema;
}

void Lannister::setdinero(int Dinero){
	dinero = Dinero;
}

void Lannister::setFuerzaMontana(int fuerza){
	fuerza_montana = fuerza;
}

void Lannister::setCantidadInt(int cantidad){
	cant_integrantes = cantidad;
}

string Lannister::getJefe_familia(){
	return jefe_familia;
}

string Lannister::getAnimalEmblema(){
	return animal_emblema;
}

string Lannister::getLema(){
	return lema;
}
int Lannister::getFuerza(){
	return fuerza_montana;
}

int Lannister::getCantidadIntegrantes(){
	return cant_integrantes;
}

int Lannister::getCantidadDinero(){
	return dinero;
}
