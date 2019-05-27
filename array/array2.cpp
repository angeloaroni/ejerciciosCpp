// array2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
////guardar 2 discos
//guarda titulo, autor, estilo
//dos formas:

// un vector de 2 dimensiones

#include <iostream>
#include <string>;
using namespace std;

int main()
{
	string discos[2][3];
    
	/*discos[0][0] = "lies";
	discos[0][1] = "gnr";
	discos[0][2] = "rock";

	discos[1][0] = "xxxx";
	discos[1][1] = "xxxx";
	discos[1][2] = "xxxx";

	discos[2][0] = "yyyyy";
	discos[2][1] = "yyyy";
	discos[2][2] = "yyyy";
*/
	//rellenamos array
	for (int x = 0; x < 2; x++){
		cout << "Escribe Nombre, Autor y Estilo: " << endl;
		for (int i = 0; i < 3; i++){
			cin >> discos[x][i];
		}
	}
	//mostramos el vector de 2 dimenciones
	cout << "Discos Guardados: " << endl;
	for (int x = 0; x < 2; x++) {
		for (int i = 0; i < 3; i++) {
			cout << discos[x][i] << endl;
		}
		cout << "------------" << endl;
	}
	return 0;
} 

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

