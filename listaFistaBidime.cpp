// Fiesta que gurade datos de los asistentes y que modifique y elimine participantes
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

#include <iomanip>  
using namespace std;

int main(){
    string nombre[3];    
    int edad[3];
    int saldo[3];
    
	string agenda[2][3]=
	{
	    {"Paco", "33", "5"},
	    {"Lucas", "34", "4"}
	};
	int posicion;
	int opcion;

    do
    {
        cout << "1.- Alta invitados\n";
        cout << "2.- Baja invitados\n";
        cout << "3.- Modificar invitados\n";
        cout << "4.- Mostrar invitados\n";
        cout << "5.- Salir\n";
        cout << "Elige opcion: ";        
        cin >> opcion;

        switch (opcion)
        {
            case 1:{
            	system("CLS");
                for (int i = 0; i < 3; i++)
                {
                    cout << "Escribe nombre: ";
                    cin >> nombre[i];
                    cout << "Escribe edad: ";
                    cin >> edad[i];
                    cout << "Escribe saldo: ";
                    cin >> saldo[i];
                }
                system("CLS");
                break;
            }
            case 2:{
				system("CLS");            	
                cout << "Que invitado eliminamos: ";
                cin >> posicion;
                nombre[posicion]="";
                edad[posicion]=0;
                saldo[posicion]=0;                
                break;
            }
            case 3:{
            	system("CLS");
                cout << "Que invitado modificas ";
                cin >> posicion;
                cout << "Introduce nuevo nombre: ";
                cin >> nombre[posicion];
                cout << "Introduce nueva edad: ";
                cin >> edad[posicion];
                cout << "Introduce nuevo saldo: ";
                cin >> saldo[posicion];
                break;
            }
            case 4:{
            	system("CLS");
            	for(int fila=0;fila<NUMFIL;fila++)
				{
				    for(int columna=0;columna<NUMCOL;columna++)
				        cout<<setw(15)<<agenda[fila][columna];
				    cout<<endl;
				}
				break;
			}
			case 5:{
				cout << "ADIOS!!!!!!!!!!!...";
				break;
			}
            default:
            break;
        }

    } while(opcion != 5);
    return 0;
}
