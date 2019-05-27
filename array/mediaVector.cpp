#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

int numero[4];
int media;

void pideDatos(){	
	for(int i=0; i<=3 ;i++){
		cout << "Introduce numero " << i << ": ";
		//getline(cin, numero[i]);//getline sirve para caputar string con espacios	
		cin >> numero[i];
	}
}
void verDatos(){	
	media=0;
	for(int i=0; i<=3;i++){
		cout << "\n" << i << ".- " << numero[i] ;
		media = (numero[i] + media / 4);
	}
	cout << "\nLa media es: " << media;
}
int main(){
	pideDatos();
	verDatos();
	
}

