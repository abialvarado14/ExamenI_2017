#include<string>
#include<vector>
#include"Starks.h"

using namespace std;

Starks::Starks(){
	jefe_familia="";
	cant_lobos=0;
	animal_emblema="";
	lema="";
	cant_integrantes = 0;
	guerrero_valioso = "";
}

void Starks::setJefeFamilia(string jefe){
	jefe_familia=jefe;
}

void Starks::setAnimalEmblema(string animal){
	animal_emblema = animal;
}

void Starks::setLema(string Lema){
	lema = Lema;
}

void Starks::setLobos(int cantidad){
	cant_lobos = cantidad;
}

void Starks::setGuerreroV(string guerrerov){
	guerrero_valioso = guerrerov;
}

string Starks::getJefeFamilia(){
	return jefe_familia;
}

string Starks::getAnimal(){
	return animal_emblema;
}

string Starks::getLema(){
	return lema;
}

string Starks::getGuerreroValioso(){
	return guerrero_valioso;
}

int Starks::getCantLobos(){
	return cant_lobos;
}

int Starks::getCantIntegrantes(){
	return cant_integrantes;
}

