/* USA COLAS, VECTOR DINAMICO
1. AÑADIR ELEMENTO FLOAT A UN VECTOR DINAMICO
2. MOSTRAR COLA
3. ELMINAR ELEMENTO COLA
4. ELIMINAR COLA
5. ORDENAR COLA POR SELECCION
6. ORDENAR COLA POR INSERCION
7. ORDENAR COLA POR BURBUJA
9. SALIR
*/

# include <iostream>// stream --> flujos de datos
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "conio.h"
# include <time.h> // aleatorios
# include <string.h> 
# include <locale.h> 
# include <iomanip> // para decimales
# include <fstream> // sirve para abrir,crear y leer archivos

using namespace std; // posibilidad de ir haciendo algo de objetos (c++)


int insertar_cola(float *cola,float num,int ind_c){
	
	cout << "Introduce un numero: " << endl;
	cin >> num;
	cola[ind_c]=num;
	ind_c ++;
	
	return ind_c;
}

void mostrar_cola(float *cola,int ind_c){

	for (int i=0; i<ind_c; i++){
		cout << cola[i] << endl;
	}
	system("pause");
	
}


int borrar_cola(float *cola,int ind_c){
	
	if (ind_c == 0){
		cout << "LA PILA VACIA" << endl;
		system("pause");
	}else{
		
		for (int n=0; n<ind_c-1; n++){
			cola[n]=cola[n+1];
		}
		ind_c --;
	}
	
	return ind_c;
}


int borrar_cola_entera(int ind_c){
	
	if (ind_c == 0){
		cout << "LA PILA VACIA" << endl;
		system("pause");
	}else{
		ind_c=0;
	}
	
	return ind_c;
}

void ordenar_por_seleccion(float *cola, int ind_c){
	int i,j;
	float m;
	int min;
	
	for (i=0;i<ind_c;i++){
		min=i;
		for (j=i+1;j<ind_c;j++){
			if (cola[min]>cola[j])
				min=j;
		}
	
		m=cola[i];
		cola[i]=cola[min];
		cola[min]=m;
	}
	
	for (i=0; i<ind_c; i++){
		cout << i << " ....... " << cola[i] << endl;
	}
	//mostrar_ordenado();
}

void ordenar_por_insercion(float *cola, int ind_c){
	int i,j;
	float m;
	
	for (int i=1;i<ind_c;i++){
		m=cola[i];
		j=i-1;
		while(cola[j]>m and j>-1){
			cola[j+1]=cola[j];
			j--;
		}
		cola[j+1]=m;
	}
	
	for (i=0; i<ind_c; i++){
		cout << i << " ....... " << cola[i] << endl;
	}
	
}

void ordenar_por_burbuja(float *cola, int ind_c){
float intercambio;

	for (int x=0; x<ind_c; x++){
		for (int y=x+1; y<ind_c; y++){
			if (cola[x]>cola[y]){
				
				intercambio=cola[y];
				cola[y]=cola[x];
				cola[x]=intercambio;
			}
		}
	}	

	for (int i=0; i<ind_c; i++){
		cout << i << " ....... " << cola[i] << endl;
	}

}

/*void mostrar_ordenado(float *cola){
	for (int i=0; i<50; i++){
		cout << i << " ....... " << cola[i] << endl;
	}
	
}*/


int main(int argc, char *argv[]){

float *cola;
int ind_c=0;
cola=(float*)malloc(sizeof(float));

int opcion;
float num;	
	
setlocale(LC_ALL, "spanish");	
	
	do{
		system("cls");
		cout << "============= MENU ==============" << endl;
		cout << "1.- INSERTAR ELEMENTO FLOAT A COLA" << endl;
		cout << "2.- LISTAR COLA" << endl;
		cout << "3.- BORRAR ELEMENTO COLA" << endl;
		cout << "4.- BORRAR COLA ENTERA" << endl;
		cout << "5.- ORDENAR COLA POR SELECCION" << endl;
		cout << "6.- ORDENAR COLA POR INSERCION" << endl;
		cout << "7.- ORDENAR COLA POR BURBUJA " << endl;
		cout << "0.- SALIR" << endl;
		cout << "=================================" << endl;
		cout << "Elige una opcion: " << endl;
		cin >> opcion;
		cout << endl;
		cout << "................................." << endl;
		switch (opcion){
			
			case 1:{
				ind_c=insertar_cola(cola,num,ind_c);
				break;
			}
			case 2:{
				mostrar_cola(cola,ind_c);
				break;
			}
			case 3:{
				ind_c=borrar_cola(cola,ind_c);
				break;
			}
			case 4:{
				ind_c=borrar_cola_entera(ind_c);
				break;
			}
			case 5:{
				ordenar_por_seleccion(cola,ind_c);
				system("pause");
				break;
			}
			case 6:{
				ordenar_por_insercion(cola,ind_c);
				system("pause");
				break;
			}
			case 7:{
				ordenar_por_burbuja(cola,ind_c);
				system("pause");
				break;
			}
			case 0:{
				cout << "GAME OVER" << endl;
				break;
			}
		}
	}while(opcion!=10);

return 0;	
}
