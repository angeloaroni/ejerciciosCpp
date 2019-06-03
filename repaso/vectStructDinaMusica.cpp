// Musica
// Vamos a almacenar toda nuestra musica spotyf
// 3 instrumentos, (nombre y tipo)(vector normal[3])
// canciones (cantante y album) 2 vactores dinamicos
// 3 conciertos (grupo y precio) vector struct[3]

// EXTRAS
// bailes(nombre y dificultad) struct dinamico

#include "string.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//vector normal para instrumento
string nombre[3];
string tipo[3];

//vector dinamico para canciones
char *cantante[20];
char *album[20];
int numCancion = 0;

//struct para conciertos
struct Conciertos
{
    string grupo;
    float precio;
};
Conciertos artista[3];

//struct dinamico para bailes
typedef struct {
	char nombre[25];
	int dificultad;		
} Bailes;
typedef Bailes *punteroBailes;
punteroBailes vectorBailes;
int posicion = 0; 

void altaInstrumento(){
    for (int i = 0; i < 3; i++)
    {
        cout << "Introdusca nombre: ";
        cin >> nombre[i];
        cout << "Introdusca tipo: ";    
        cin >> tipo[i];
    }    
}
void altaCancion(){     
    cantante[numCancion] = (char*) malloc (sizeof(char));
    album[numCancion] = (char*) malloc (sizeof(char));

    cout << "Introdusca cantante: ";
    cin >> cantante[numCancion];
    cout << "Introdusca album: ";
    cin >> album[numCancion];
    numCancion++;
    
}
void altaConcierto(){
    for (int i = 0; i < 3; i++)
	{
		cout << "Ingresar nombre del concierto: ";
		cin >> artista[i].grupo;
		cout << "Precio del concierto: ";
		cin >> artista[i].precio;	
	}
}
void altaBailes(){
	string nomb;
	cout << "Introdusca nombre del baile: ";			
	getline(cin, nomb);
	strcpy((*vectorBailes).nombre, nomb.c_str());				

    cout << "Introdusca dificultad: ";
	cin >> (*vectorBailes).dificultad;		
	cin.ignore();
	*vectorBailes++; 

	posicion++;
}
void verInstrumento(){
    for (int i = 0; i < 3; i++)
    {
        cout << "Nombre: "<< nombre[i] << endl;
        cout << "Tipo: "<< tipo[i] << endl;
    }    
}

void verCancion(){
    for (int i = 0; i < numCancion; i++)
    {
        cout << "cantante: " << cantante[i] << endl;
        cout << "album: " << album[i] << endl;
    }
    
}

void verConcierto(){
    

}

void eliminarCancion(){
    string eliminar;
    cout << "Cantante a eliminar: ";
    cin >> eliminar;
    for (int i = 0; i < numCancion; i++)
    {
        if(cantante[i] == eliminar){
            cantante[i]="";
            album[i]="";
        }else
            cout << "El cantante no existe..." << endl;
    }
}
void eleminarInstrumento(){
    string eliminar;
    cout << "Elemnto a eliminar: ";
    cin >> eliminar;
    for (int i = 0; i < 3; i++)
    {
        if(nombre[i] == eliminar){
            nombre[i]="";
            tipo[i]="";
        }else
            cout << "El instrumento no existe..." << endl;
    }
    
}
void verBailes(){
    for (int i = 0; i < posicion; i++)
	{
		*vectorBailes--;
	}
		for (int x = 0; x < posicion; x++)
		{
			cout << "Nombre baile: " << (*vectorBailes).nombre << endl;				
			cout << "Dificultad baile: " << (*vectorBailes).dificultad << endl;
            cout << "---------------------------------" << endl;
			*vectorBailes++;			
		}
		
}
int main(int argc, char const *argv[])
{
    //para los struct dinamicos
    vectorBailes = (punteroBailes) malloc(1000*sizeof(Bailes));
 
    int opcion;	
	do
	{
		system("cls");
		cout << endl;
		cout << "--------------MENU-------------" << endl;
		cout << endl;
		cout << "1.- Insertar instrumentos" << endl;
		cout << "2.- Insertar canciones" << endl;
		cout << "3.- Insertar conciertos" << endl;
		cout << "4.- Insertar baile" << endl;
		cout << "5.- Ver instrumentos" << endl;
		cout << "6.- Ver canciones" << endl;
		cout << "7.- Ver conciertos" << endl;
		cout << "8.- Ver bailes" << endl;
		cout << "9.- Eliminar un instrumento" << endl;
		cout << "10.- Eliminar una cancion" << endl;		
		cout << "11.- Eliminar un concierto" << endl;		
		cout << "12.- Eliminar bailes" << endl;		
		cout << "13.- Salir" << endl;

		cout << endl<< "Introduce una opcion: ";
		cin >> opcion;
        cin.ignore();
		switch (opcion)
		{
			case 1:                
                altaInstrumento();
                system("pause");
				break;
			case 2:
                altaCancion();
                system("pause");
				break;
			case 3:
                altaConcierto();
                system("pause");
				break;
			case 4:
                altaBailes();
                system("pause");
				break; 
			case 5:
                verInstrumento();
                system("pause");
				break;			
			case 6:
                verCancion();
                system("pause");
				break;			
			case 7:

				break;			
			case 8:
                verBailes();
                system("pause");
				break;			
			case 9:
                
				eleminarInstrumento();
                system("pause");
				break;			
			case 10:
				eliminarCancion();
                system("pause");
				break;			
			case 11:
				
				break;			
			case 12:
				
				break;			
			case 13:
				cout << "ADIOS" ;
				break;			
		}

	} while (opcion != 13);
	return 0;    
}
