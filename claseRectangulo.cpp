#include <iostream>
#include <windows.h>
using namespace std;

class Rectangulo{
	private:
		float largo;
		float ancho;
	public:
		Rectangulo(float,float); // constructor
		void mostrarDatos();
		void perimetro();
		void area();	
	
};

Rectangulo::Rectangulo(float la,float an){
	largo=la;
	ancho=an;
}
void Rectangulo::mostrarDatos(){
	cout<<"LARGO: "<<largo<<endl;
	cout<<"ANCHO: "<<ancho<<endl;
}
void Rectangulo::perimetro(){
	cout<<"El perímetro de un rectángulo es :"<<(2*largo) +(2*ancho)<<endl;
}

void Rectangulo::area(){
	cout<<"Área de un rectángulo es: "<<(largo*ancho)<<endl;
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	Rectangulo R1= Rectangulo(20,10);
	R1.mostrarDatos();
	R1.perimetro();
	R1.area();
	
	float base, altura;
	cout<<"Ingrese la base del rectángulo: "; cin>>base;
	cout<<"Ingrese la altura del rectángulo: "; cin>>altura;
	cout<<"\n";
	Rectangulo R2(base,altura);
	R2.mostrarDatos();
	R2.perimetro();
	R2.area();
	return 0;
}