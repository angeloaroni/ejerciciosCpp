// pasar un argumento numerico
// adivina un numero entre 0 y 5
// que muestre ok si coindice con un numero aleaorio
#include "string"
#include <iostream>
#include "time.h"

using namespace std;
int main(int arg, char *argv[]) {
	int argumento = atoi(argv[1]);//convierte string a un entro
	int aleatorio;	
	srand(time(NULL));
	aleatorio = rand() % 5 + 1;//alatorio de 1 a 5
	
	if (argumento == aleatorio)
		cout << "CORRECTO!!!!!";
	else
		cout << "sigue intentando..";
	return 0;
}