#include <iostream>
#include <string>
#include "conio.h"
#include <time.h>
#include <fstream>
#include <stdlib.h>

//argc número total (cantidad) de parametros que se introducen 
//argv en cada posición está lo que hemos introducido (argumentos)

/*Para añadir contenido a un archivo de texto abierto con ofstream
fichero.open("archivo.txt";ios::app)*/


/*Realiza 8 funciones con archivos
1. Captura un string y un int y grábalos en un fichero
2. Visualiza todo el archivo
3. Borra todo el archivo
4. Añade otro string y entero al archivo
5. Pásalo todo a un vector
6. Elimina uno que busquemos por el string
del vector
7. Modifica uno en concreto, del vector
8. Pasa todo el vector al archivo
9. Salir
*/


using namespace std;
string palabra;
int numero;
string lineas;
string palabrados;
string modificar;
string nuevonombre;
string nombrearchivo;
string nombre[2];
int numeros[2];
string eliminar;
int opc;
int numerodos;

	void funcionuno(){//capturar y grabar

	ofstream escritura;
	escritura.open("funciones.txt");
	cout << "Intro palabra: ";
	cin >> palabra;
	cout << "Intro numero: ";
	cin >> numero;
	
	escritura << palabra << endl;
	escritura << numero << endl;
	
	escritura.close();
	
		}
		
	void funciondos(){//visualizar archivo
		ifstream lectura;
		lectura.open("funciones.txt");
		
			while(getline(lectura,lineas)){   //va leyendo hasta que no queden lineas
			cout << lineas  << endl;
	}
}
	void funciontres(){//borrar archivo
	ofstream escritura1;
	escritura1.open("funciones.txt");
	
		escritura1.close();
	}
	
void funcioncuatro(){//añade otro string y numero al archivo
	ofstream escritura2;
	string funciones;
	cout << "Intro nombre archivo (funciones.txt): ";
	cin >> funciones;
	escritura2.open(funciones.c_str(),ios::app);
	
	cout << "Intro segunda palabra: ";
	cin >> palabrados;
	cout << "Intro segundo numero: ";
	cin >> numerodos;
	
	escritura2 << palabrados << endl;
	escritura2 << numerodos;
	
	escritura2.close();
}
	void funcioncinco(){//pasar todo a un vector
		
		ifstream lectura2;
		lectura2.open("funciones.txt");
		int x=0;
		string linea;
		while(getline(lectura2,linea)){
		
			nombre[x]=linea;
			getline(lectura2,linea);
			numeros[x]=atoi(linea.c_str());
		
			cout << nombre[x] << endl;
			cout << numeros[x] << endl;
				x++;
		}
		lectura2.close();
	}
	
void funcionseis(){//Elimina uno que busquemos por el string del vector
		cout << "Intro nombre a eliminar: ";
		cin >>eliminar;
		int x=0;
		for(int x=0;x<2;x++){
	
		if(eliminar==nombre[x]){
		nombre[x]="";
		}
			}
	}
void funcionsiete(){//modificar uno del vector
		cout <<"Intro nombre a modificar: ";
	cin >> modificar;
	for(int x=0;x<2;x++){
	if(modificar==nombre[x]){

	cout << "Intro nuevo nombre: ";
	cin >> nuevonombre;
		nombre[x]=nuevonombre;
		}

	}
}
	void funcionocho(){//Pasa todo el vector al archivo
	
	cout << "Intro nombre del archivo a guardar (funciones.txt): ";
	cin >> nombrearchivo;
	ofstream escritura3;
	escritura3.open(nombrearchivo.c_str());
	for(int x=0;x<2;x++){

	escritura3 << nombre[x] << endl;
	escritura3 << numeros[x] << endl;
	}
	escritura3.close();
	}


		
	
	
	
	
	
int main(int argc, char *argv[]){
	
	do{

	cout << "*Elija una opcion del menu*\n";
	cout << "\n 1. Capturar y grabar\n 2. Visualizar todo el archivo\n 3. Borrar todo el archivo\n 4. Anadir string y entero\n ";
	cout << "5. Pasar a un vector\n 6. Eliminar por string del vector\n 7. Modificar uno del vector\n 8. Pasar todo el vector al archivo\n 9. Salir\n";
	cin >> opc;
	switch (opc){

		case 1:{
			funcionuno();
			break;
		}
		case 2:{
			funciondos();
			break;
		}
		case 3:{
			funciontres();
			break;
		}
		case 4:{
			funcioncuatro();
			break;
		}
		case 5:{
			funcioncinco();
			break;
		}
		case 6:{
			funcionseis();
			break;
		}
		case 7:{
			funcionsiete();
			break;
		}
		case 8:{
			funcionocho();
			break;
		}
		case 9:{
			break;
		}
	
			}
			
	}while(opc!=9);
	
	
	
	return 0;
}
