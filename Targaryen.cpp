#include<string>
#include<vector>
#include "Targaryen.h"
using namespace std;

Targaryen::Targaryen(){
	reina = "";
	animal_emblema = "";
	lema = "";
	cant_dragones =0;
	cantidad_barcos = 0;
}

void Targaryen::setReina(string nReina){
	reina = nReina;
}

void Targaryen::setAnimal_Emblema(string animal){
	animal_emblema = animal;
}

void Targaryen::setLema(string Lema){
	lema = Lema;
}

void Targaryen::setCantDragones(int cantidad){
	cant_dragones = cantidad;
}

void Targaryen::setCantBarcos(int cantidadB){
	cant_dragones = cantidadB;
}

string Targaryen::getReina(){
	return reina;
}

string Targaryen::getAnimalEmblema(){
	return animal_emblema;
}

string Targaryen::getLema(){
	return lema;
}

int Targaryen::getCant_Dragones(){
	return cant_dragones;
}

int Targaryen::getCant_Barcos(){
	return cantidad_barcos;
}
