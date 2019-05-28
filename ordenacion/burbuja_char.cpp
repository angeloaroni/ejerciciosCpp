#include <iostream>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

char vector[5000];

void cargar_vector(){
	srand(time(NULL));
	int i;
	for(i=0;i<5000;i++){
		vector[i]=rand()%26+65; // de la A a la Z
	}
}

void ordenar_vector(){
	 char cambio;
	 for (int x=0;x<4999;x++){
	 	for (int j=x+1;j<5000;j++){
	 		if (vector[x]<vector[j]){
	 			cambio=vector[x];
	 			vector[x]=vector[j];
	 			vector[j]=cambio;
	 			
			 }
	 		
		 }	
	  }
	
}

void mostrar_vector(){
		int i;
		for(i=0;i<5000;i++){
		cout << vector[i] << "," ;
	}
	
}

int main(){
	int opcion;
	do{
		cout << endl;
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





