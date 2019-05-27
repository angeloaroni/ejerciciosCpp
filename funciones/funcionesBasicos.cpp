//1.- funcion que muestre un apareja de padel
//2.- que reciba 1(primavera) 2(otoño) 3(verano) 4(invierno)
//3.- capturar nombre de marca de un movil desde una funcion y mostrarlo desde main
//4.- capturamos por teclado y desde main una edad, la enviasmo a una funcion y esta debe devolver si la esda es > que la tuya
//mostrar por  pantalla ese dato desde main
#include <iostream>
using namespace std;

void muestraJugador() {
	string nombre1="Juan";
	string nombre2="Lucas";
	cout << "Jugadores: " << nombre1 << " " << nombre2;		
}

void muestraEstacion(int numEstacion) {

	switch (numEstacion)
	{
	case 1:
		cout << "Primavera";
		break;
	case 2:
		cout << "Verano";
		break;
	case 3:
		cout << "Otoño";
		break;
	case 4:
		cout << "Invierno";
		break;
	default:
		break;
	}
}

string nombreMovil() {
	string marca="Xiaomi";	
	return marca;
}
string preguntaEdad(int edad) {
	string respuesta;
	if (edad < 33)
		respuesta = "Eres mayor";
	else
		respuesta = "Eres menor";
	return respuesta;
}
int main() {
	int numEstacion;
	int edad;

	//func basica void
	muestraJugador();
	//func envio de parametros
	cout << "\nIntroduce numero de estacion:";
	cin >> numEstacion;
	muestraEstacion(numEstacion);
	//func recibimos parametros
	string marca = nombreMovil();
	cout << "\nEl modelo ingresado es: " << marca;

	//func enviamos y recibimos parametros a la funcion
	cout << "\nIngresar edad: ";
	cin >> edad;
	string resp = preguntaEdad(edad);//enviamos edad a la funcion y a la vez recibimos la repsuesta del return de la funcion
	cout << resp;

	return 0;
}

