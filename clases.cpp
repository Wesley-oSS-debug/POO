//programacion orientada  a objetos : clase
// los constructores nos ayuda inicializar los atributos
#include <iostream>
#include <windows.h>
using namespace std;

class Persona{
	private: // atributos  de las personas
		string dni;
		string nombre;
		int edad;
	public:// metodos
		Persona(string,string,int); // constructor
		void leer();
		void correr();
};
//constructor, nos sirve para inicializar los atributos
Persona::Persona(string _dni, string nom, int e){
	dni=_dni;
	nombre=nom;
	edad=e;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un articulo de ciencia de datos\n";
	cout<<"DNI: "<<dni<<endl;
	cout<<"EDAD :"<<edad<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<< " y estoy corriendo una maratón en Tacna\n";
	cout<<"DNI: "<<dni<<endl;
	cout<<"EDAD :"<<edad<<endl;
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	Persona p1= Persona("34235423","Wesley rivaldo",18);
	Persona p2("54235423","oscar alejandro",20);
	Persona p3("54542364234","DANNY Yair",23);
	
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();
	return 0;
	
}