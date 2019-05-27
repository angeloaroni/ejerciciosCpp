//funsion qu emuestre un string = "loqueruieras", variable global
//mostrar color y numero creados desde el main
//mostrar que dia es que mes , creados desde main
#include <iostream>
using namespace std;

string cadena;

void muestraString() {
	cadena = "lo que quieras";
	cout << "Este es el mensaje: " << cadena << endl;
}

void muestraColor(string color, int numeroColor) {
	cout << "El color es: " << color << endl;
	cout << "El numero del color es: " << numeroColor << endl;
}
void muestraMes(int dia, string mes) {
	cout << "El dia es: " << dia;
	cout << " y el mes: " << mes << endl;
}

bool pregunta() {
	bool ask=true;
	return ask;
}

//funcoin que mezcla todo los tipo de funciones
int todo(int tiempo) {
	int espacio;
	espacio = tiempo * 234;
	return espacio;
}

int main() {

	muestraString();

	//manda variable
	int numeroColor = 14;
	string color = "verde";
	muestraColor(color,numeroColor); 

	//manda dia mes
	int dia= 5;
	string mes="julio";
	muestraMes(dia, mes);

	//recibimos de la funcion
	bool ask;
	ask = pregunta();
	cout << "Pregunta: " << ask << endl;

	//funcion especial
	int tiempo = 300;
	int espacio;
	todo(tiempo);
	espacio = todo(tiempo);
	cout << "Espacio: " << espacio;

	return 0;

}