#include <iostream>

using namespace std; 

	class Punto{
	private:	
		int x,y;
	public:
		Punto(){ //constructor
		x=0; y=0;
		 };
		Punto(int valX ,int valY){
			x=valX; y=valY;
			
		} 
		void asignarX(int);
		void asignarY(int);
		int obtenerX();
		int obtenerY();
	};
	
	void Punto::asignarX(int valX){
		x=valX;
	}
	
	void Punto::asignarY(int valY){
		y=valY;	
	}
	
	int Punto::obtenerX(){
		return x;
	}
	
	int Punto::obtenerY(){
		return y;
	}
	
	
int main(){
	
	Punto objP; // instancia de clase Punto
	Punto obj2P(-10,-20);
//	objP.asignarX(80);
//	objP.asignarY(40);
	cout<<objP.obtenerX()<<endl;
	cout<<objP.obtenerY()<<endl;
	cout<<obj2P.obtenerX()<<endl;
	cout<<obj2P.obtenerY()<<endl;
	
	return 0;
	
}