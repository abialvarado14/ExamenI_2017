#include<iostream>
#include<string>
#include<vector>
//#include<PFamiliasNobles>
using namespace std;

class Starks{

	public:
		string jefe_familia;
		int cant_lobos;
		string animal_emblema;
		string lema;
		int cant_integrantes;
		string guerrero_valioso;
	//	vector* <int*> ejercito;
	private:
		Starks();
		void setJefeFamilia(string jefe);
		void setAnimalEmblema(string animal);
		void setLema(string Lema);
		void setLobos(int cantidad);
		void setGuerreroV(string guerrerov);
		string getJefeFamilia();
		string getAnimal();
		string getLema();
		string getGuerreroValioso();
		int getCantLobos();
		int getCantIntegrantes(); 
};
