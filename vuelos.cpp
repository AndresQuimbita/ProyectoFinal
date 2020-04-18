#include <iostream>

using namespace std;

class AvionStatus{
	private:
		int dia;
		int hora;
		int ventana1 [5];
		int ventana2 [5];
		int pasillo1 [5];
		int pasillo2 [5];
		
	public:
		AvionStatus(int dias, int horas){
			dia = dias;
			hora = horas;			
		}
		int getdia(){
			return dia;
		}
		
		int gethora(){
			return hora;
		}
		
		int getventana1(int puesto){
			return ventana1[puesto];
		}
		
		int getventana2(int puesto){
			return ventana1[puesto];
		}
		
		int getpasillo1(int puesto){
			return pasillo[puesto];
		}
		
		int getpasillo2(int puesto){
			return pasillo[puesto];
		}
		
		void printinfo(){
			
		}
};
	
int main(){
	
	while (isrunning ) {
	
		string option;
		cout << "Quieres salir? Ingresa Q, de lo contrario escribe cualquier cosa: ";
		cin >> option;
		cout << endl << endl;
		if (option == "Q"){
			isrunning = false;
			
		}
	}
}
