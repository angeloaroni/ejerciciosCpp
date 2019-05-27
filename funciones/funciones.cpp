#include<string>
#include <time.h>
#include <iostream>
using namespace std;
float n4;//variable global
float n3;
void sumar() {
	cout << "SUMA: " << 5 + 3 << endl;
}
void restar() {
	cout << "Resta 7 - 5: " << 7 - 5 << endl;
}

void multiplicar() {
	float n1;//variable local
	float n2;
	cout << "Ingrese N1: ";
	cin >> n1;
	cout << "Ingrese N2: ";
	cin >> n2;
	cout << "La mutiplicacion de: " << n1 << "  * " << n2 << " es " << n1*n2 << endl;
}
void dividir() {	
	cout << "Ingrese N3: ";
	cin >> n3;
	cout << "Ingrese N4: ";
	cin >> n4;
	cout << "La division de " << n3 << " / " << n4 << " es " << n3 / n4 << endl;
}
int main() {
	sumar();
	restar();
	multiplicar();
	dividir();
	return 0;
}