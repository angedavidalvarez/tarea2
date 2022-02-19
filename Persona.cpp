#include"Propietario.cpp"
#include<iostream>
using namespace std;
class Persona: Propietario{
	//atributos
	protected: string nombres,apellidos, fecha_nacimiento, direccion;
	           int telefono;
	//constructor
	protected:
		Persona(){
		}
			Persona(string nom, string fecha, string ape,string dir, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha_nacimiento = fecha;
				telefono = tel;
			}
	//Get(Mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
};

main(){
	string nit,nombres,apellidos, fecha ,direccion;
	int telefono;
	double cui;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Su fecha de nacimiento";
	cin>>fecha;
	cout<<"Ingrese el CUI:  ";
	cin>>cui;
	
	//metodo mostrar
	void mostrar();{
		cout<<"________________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<","<<fecha<<","<<direccion<<","<<telefono<<","<<cui<<","<<endl;
		
	}
	//modificar
	cout<<"Ingrese nit: ";
	cin>>nit;
	cout<<"Ingrese CUI: ";
	cin>>cui;
	
	Propietario obj = Propietario();
	obj.setNit(nit);
	obj.setCUI(cui);
	
	void mostrar();{
		cout<<"________________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<","<<fecha<<","<<direccion<<","<<telefono<<","<<cui<<","<<endl;
		
	}
	

}
