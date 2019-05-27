#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

main(){
	int contador = 0;
	contador++;//incrementa 1 en la linea siguiente
	contador = contador + 1;
	cout << contador;
	if( ++contador == 3){//suma 1 al leer la linea
		cout << "\nvalgo DOS";
	}
	cout << contador;	
	if(contador++ == 3){//suma 1 al terminar la linea
		cout << "\nvalgo CUATRO ";
	}
	contador -= 4;//contador resta 4
	cout << contador;
}

