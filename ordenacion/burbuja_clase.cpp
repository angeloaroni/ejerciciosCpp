#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;



void mostrar_ordenado(int vector[5000]){
	
		//mostramos el vector 
	for(int x=0;x<5000;x++){
		cout << vector[x] << " ";
	}
	
	
}

void ordenar_vector(int vector[5000]){
	int intercambio;

	for(int x=0;x<4999;x++){
		for(int y=x+1;y<5000;y++){
			if(vector[x]>vector[y]){
			    intercambio = vector[y];
			    vector[y]=vector[x];
			    vector[x]=intercambio;
			}			
		}
	}
	mostrar_ordenado(vector);
	
}

void mostrar_vector(int vector[5000]){
	
	
	//mostramos el vector 
	for(int x=0;x<5000;x++){
		cout << vector[x] << " ";
	}
	
	
	ordenar_vector(vector);
}


void llenar_vector(int vector[5000]){
	//Llenar el vector de números aletorios
	;
	for(int x=0;x<5000;x++){
		
		vector[x]=rand()%100;
		
		}

	mostrar_vector(vector);
}




int main(int argc,char *argv[]){
	srand(time(NULL));
	int vector[5000];
	
	llenar_vector(vector);

	
	
	cout << endl;

	
	

	return 0;
	
}
