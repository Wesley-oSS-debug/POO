#include <iostream>
#include <string>
using namespace std;
	class Persona{
		private:
			string dni;
			string nombre;
			int edad;
			char sexo;
		public:
			
			void mostrarInformacion();
		Persona(string _dni,string _nombre,int _edad,char _sexo){
			dni=_dni;
			nombre=_nombre;
			edad=_edad;
			sexo=_sexo;
			
		}
};

	// mostrar informacion
	void Persona::mostrarInformacion(){
		cout<<dni<<endl;
		cout<<nombre<<endl;
		cout<<edad<<endl;
		cout<<sexo<<endl;
	}
	
int main(){
	Persona Per=Persona("4124124","WESLY",123,'f');
	Per.mostrarInformacion();
	
	
	return 0;
}