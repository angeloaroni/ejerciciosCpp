// USA COLAS, VECTOR  DINAMICO
// 1.- añadir elmentos float a un vector dinamico 
// 2.- ver cola
// 3.- eliminar elemento cola
// 4.- eliminar cola
// 5.- Ordenar cola por seleccion
// 6.- Ordenar cola por inserccion
// 7.- Ordenar cola por burbuja

//Colas con 1 vector dinamico
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
using namespace std;

// float cola[MAX];
// int ind_c=0;


// float agregarElementoCola(float *cola, int indCola){	
//     if(indCola == MAX){
//         cout << "Error cola llena ";
//         getch();
//     }else{
//         cout << "Introduce nuevo elmento cola: ";
// 	    cin >> cola[indCola];
// 	    indCola++;
//     }   
//     return indCola; 
// }

int insertaCola(float *cola,float num,int indCola){
	
	cout << "Introduce un numero: " << endl;
	cin >> num;
	cola[indCola]=num;
	indCola ++;
	
	return indCola;
}


void verCola(float *cola, int indCola){
	for (int i = 0; i < indCola; i++)
	{
		cout << cola[i] << " - " ;
	}
    cout << endl;
	system("pause");
}

int borrarElementoCola(float *cola,int indCola){
    if (indCola == 0)
    {
        cout << "cola vacia.." << endl;
    }
    else
    {
        for (int i = 0; i < indCola - 1; i++)
        {
            cola[indCola] = cola[indCola + 1];
        }
        indCola--;
    }
}

int borrarColaEntera(int indCola){
	
	if (indCola == 0){
		cout << "LA PILA VACIA" << endl;
		system("pause");
	}else{
		indCola=0;
	}
	
	return indCola;
}



void ordenaSeleccion(float *cola,int indCola){
    float m;
    int min;
    for (int i = 0; i < indCola; i++){
        min = i;
        for (int x = 0; x < indCola; x++){
            if (cola[min] < cola[x])
                min = x;
            m = cola[i];
            cola[i] = cola[min];
            cola[min] = m;
        }
    }
    cout << "\nVector ordenado" << endl;
    for (int i = 0; i < indCola; i++)
        cout << cola[i] << " - " ;

    cout << endl;
    system("pause");    
}

void ordenaInsercion(float *cola, int indCola){
	int i,j;
	float m;
	
	for (int i=1;i<indCola;i++){
		m=cola[i];
		j=i-1;
		while(cola[j]>m and j>-1){
			cola[j+1]=cola[j];
			j--;
		}
		cola[j+1]=m;
	}
	
	for (int i = 0; i < indCola; i++)
        cout << cola[i] << " - " ;

	cout << endl;
    system("pause"); 
}

void ordenaBurbuja(float *cola, int indCola){
float intercambio;

	for (int x=0; x<indCola; x++){
		for (int y=x+1; y<indCola; y++){
			if (cola[x]>cola[y]){
				
				intercambio=cola[y];
				cola[y]=cola[x];
				cola[x]=intercambio;
			}
		}
	}	

	for (int i = 0; i < indCola; i++)
        cout << cola[i] << " - " ;

	cout << endl;
    system("pause"); 

}

int main(int argc, char const *argv[])
{
	int opcion;
	//int *punteroPosicion;

    //creamos el vector dinamico de tipo float
    float *cola;
    float num;
    int indCola = 0;
	cola =(float*) malloc(sizeof(float));

	do
	{
        system("cls");
		cout << endl;
		cout << "--------------MENU-------------" << endl;
		cout << endl;
		cout << "1.- Añadir elmentos float a un vector dinamico " << endl;
		cout << "2.- Ver cola" << endl;
		cout << "3.- Eliminar elemento cola" << endl;
		cout << "4.- Eliminar cola" << endl;
		cout << "5.- Ordenar cola por seleccion" << endl;
		cout << "6.- Ordenar cola por inserccion" << endl;
		cout << "7.- Ordenar cola por burbuja" << endl;
		cout << "9.- Salir" << endl;

		cout << endl<< "Introduce una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
            case 1:                
                //indCola = agregarElementoCola(cola, indCola);   
                indCola = insertaCola(cola, num, indCola);            
                break;
            case 2:
                verCola(cola, indCola);
                break;
            case 3:
                indCola = borrarElementoCola(cola, indCola);                
                break;
            case 4:
                indCola = borrarColaEntera(indCola);
                break; 
            case 5:
                ordenaSeleccion(cola, indCola);
                break;
            case 6:
                ordenaInsercion(cola, indCola);
                break;
            case 7:
                ordenaBurbuja(cola, indCola);
                break;
            case 9:
                cout << "ADIOS" ;
                break;
		}

	} while (opcion != 9);

	system("pause");
	return 0;
}
