#include<iostream>
using namespace std;
class Propietario{
		//atributos
	protected: string nit;
	           double cui;
	//constructor
	public:
		Propietario(){
		}
			Propietario(string nit, double cui){
				nit = nit;
				cui = cui;
			}
	//metodos
	//set(Modificar)
	void setNit(string n){nit = n;}
	void setCUI(double CUI){cui = CUI;}
	
	//Get(Mostrar)
	string getNit(){return nit;}
	double getCUI(){return cui;}
	
};
