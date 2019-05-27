#include<string>
#include <time.h>
#include <iostream>
using namespace std;
string nombre;
int edad;

void mostrar() {
	cout << "ingrese nombre: ";
	cin >> nombre;
	cout << "intro edad: ";
	cin >> edad;
	cout << "Nombre: " << nombre << " edad: " << edad;
}

int main() {
	setlocale(LC_ALL, "spanish");

	mostrar();
	return 0;
}