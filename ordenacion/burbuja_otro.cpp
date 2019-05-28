#include <iostream>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int vector[700];

void cargar_vector(){
	srand(time(NULL));
	int i;
	for(i=0;i<700;i++){
		vector[i]=rand()%1000;
	}
}

void ordenar_vector(){
	int x,j,cambio;
	 for (x=0;x<699;x++){
	 	for (j=x+1;j<700;j++){
	 		if (vector[x]>vector[j]){
	 			cambio=vector[x];
	 			vector[x]=vector[j];
	 			vector[j]=cambio;
	 			
			 }
	 		
		 }	
	  }
	
}

void mostrar_vector(){
		int i;
		for(i=0;i<700;i++){
		cout << vector[i] << "," ;
	}
	
}

int main(){
	
	do{
		cout << "1.- cargar vector" << endl;
		cout << "2.- mostrar vector" << endl;
		cout << "3.- ordenar vector" << endl;
		cout << "4.- salir" << endl;
		cout << "Elige una opcion:" ;
		cin >> opcion;
	
		switch (opcion){			
			case 1: 
				cargar_vector();
				break;
			case 2:
				mostrar_vector();
				break;
			case 3:
				ordenar_vector();
				break;						
		}	
		}while (opcion != 4);
	
	
	system("pause");
	return 0;
	
	
	
	
}





