// pasar un argumento numerico
// adivina un numero entre 0 y 5
// que muestre ok si coindice con un numero aleaorio
#include "string"
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	int totalParametros = argc;
	bool igual = true;

	// string parametro1 = argv[1], parametro2 = argv[2];
	// if (parametro1 == parametro2)
	// 	cout << "Los dos parametros son iguales...";
	// else
	// 	cout << "Los parametros no coinciden...";
	
	string compara[totalParametros];
	for (int i = 1; i < totalParametros; i++)
	{
		compara[i]=argv[i];
	}
	for (int i = 1; i < totalParametros-1; i++)
	{
		if (compara[i] != compara[i+1])
			igual = false;
			
	}
	if (igual == true)
		cout << "Todos son iguales";
	else
		cout << "Los datos  no son iguales";

	return 0;
}

