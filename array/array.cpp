// array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//guardar 2 discos
//guarda titulo, autor, estilo
//dos formas:
//1.- con tres vectores
//2.- un vector de 2 dimensiones
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

#include <iomanip>  
using namespace std;

int main() {
	string titulo[2];
	string autor[2];
	string estilo[2];

	for (int i = 0; i < 2; i++) {
		titulo[i] = "";
		autor[i] = "";
		estilo[i] = "";
	}
	for (int i = 0; i < 2; i++) {
		cout << "Titulo: " << endl;
		cin >> titulo[i];
		cout << "Autor: " << endl;
		cin >> autor[i];
		cout << "Estilo: " << endl;
		cin >> estilo[i];
	}
	for (int i = 0; i < 2; i++) {
		cout << "Nombre " << titulo[i] << endl;
		cout << "Autor: " << autor[i] << endl;
		cout << "Estilo: " << estilo[i] << endl;
	}



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
