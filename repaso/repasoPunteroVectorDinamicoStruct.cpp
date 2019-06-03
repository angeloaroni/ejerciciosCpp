#include "string.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int main(int argc, char const *argv[])
{
	//////// PUNTEROS ////////////////
	//puntero int
	int numero;
	int *punteroNumero; 
	punteroNumero = &numero;//asosia al puntero a su variable
	*punteroNumero = 78;
	//puntero string
	string cadena;
	string *punteroCadena;
	punteroCadena = &cadena;//asosia al puntero a su variable
	*punteroCadena = "hola" ;

	cout <<"puntero numero: "<< *punteroNumero << endl;
	cout <<"puntero cadena: "<< *punteroCadena << endl;
	cout <<"Direccion de puntero de numero: "<< punteroNumero << endl;
	cout <<"Direccion de puntero de cadena: "<< punteroCadena << endl;
	cout <<"Direccion de memoria de numero: "<< &numero << endl;
	cout <<"Direccion de memoria de cadena: "<< &cadena << endl;
	
	//////// VECTOR DINAMICO ////////////////
	//vector dinamico float
	float num;
	float *punteroFloat;//es un puntro
	//con esto el vector se convierte en dinamico si se cuelga ponemos (1000*sizeof(float))
	punteroFloat = (float*) malloc (sizeof(float));

	punteroFloat[0] = 3.5; //puedo accedes a los que quiera, pero siempre al usar las posiciones
	punteroFloat[1] = 5.5; //por primera vez, lo hago de forma consecutiva
	punteroFloat[2] = 4.5;
	cout << punteroFloat[0];
	cout << endl;

	//////// STRUCT DINAMICO ////////////////
	typedef struct {
		int numero;
		char letra;
		char texto[25];
	} clase;
	typedef clase *alumno;
	alumno vector;
	vector = (alumno) malloc(sizeof(clase));
	//metemos datos para enteros
	(*vector).numero = 5;	
	//metemos datos para letras
	(*vector).letra = 'B';	
	//metemos datos para string
	strcpy((*vector).texto, "Buenos dias");
	//imprimimos por pantalla
	cout << "Struct numero: " << (*vector).numero << endl;
	cout << "Struct letra: " << (*vector).letra << endl;
	cout << "Struct texto: " << (*vector).texto << endl;
	//incrementa posicion de vector para siguiente registro
	*vector++;
	//metemos datos para enteros
	(*vector).numero = 15;	
	//metemos datos para letras
	(*vector).letra = 'H';	
	//metemos datos para string
	strcpy((*vector).texto, "Buenos tardes");
	//imprimimos
	cout << "Struct numero: " << (*vector).numero << endl;
	cout << "Struct letra: " << (*vector).letra << endl;
	cout << "Struct texto: " << (*vector).texto << endl;
	*vector--;//volvemos al primeoro
	cout << "Struct numero: " << (*vector).numero << endl;
	cout << "Struct letra: " << (*vector).letra << endl;
	cout << "Struct texto: " << (*vector).texto << endl;
	return 0;
}
