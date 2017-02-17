#include<string>
#include<vector>
#include"Dothraki.h"
using namespace std;

class Targaryen{
	
	private:
		string reina;
		string animal_emblema;
		string lema;
		int cant_dragones;
		vector<Dothraki> ejercito;
		int cantidad_barcos;
	public:
		Targaryen();
		void setReina(string nReina);
		void setAnimal_Emblema(string animal);
		void setLema(string Lema);
		void setCantDragones(int cantidad);
		void setCantBarcos(int cantidadB);
		string getReina();
		string getAnimalEmblema();
		string getLema();
		int getCant_Dragones();
		int getCant_Barcos();
};
