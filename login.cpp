#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

int main(){
	
	string clave;
	string usuario;
	int intento = 3;
	for(int i = 1;i <= 3; i++){
	system("CLS");//borra la pantalla	
		cout << "Ingrese usuario: ";
		cin >> usuario;
		cout << "Ingrese contraseña: ";
		cin >> clave;
		
		if(usuario == "angelo" && clave == "123"){			
			cout << "Bienvenido" << usuario;
		}else{
			cout << "Usuario incorrecto ... ";
			intento = intento - 1;
		}
		
		cout << "\nte quedan: " << intento << " intentos..\n"	;
		//return 0;	
	}
	
}
