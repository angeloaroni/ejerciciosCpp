#include <iostream>
#include <stdio.h>
#include <stdlib.h>


	
imprimir (int v[5000]){

int i;
printf("\nVector ordenado");
for (i=0;i<5000;i++){
	printf("%i |",v[i]);
	
}

}



	
	

burbuja(int v[5000])
{
	int m;
	 for (int i=0;i<4999;i++){
	 	for (int j=i+1;j<5000;j++){
	 		if (v[i]<v[j]){
	 			m=v[i];
	 			v[i]=v[j];
	 			v[j]=m;
			 }
	 		
		 }
	 }
	 
	 
	 
	 
	 imprimir(v);
	 
}


cargar_vector(){
	
	int v[5000];
	int i;
	int aleatorio;
	printf("Vector sin ordenar \n");
	for (i=0;i<5000;i++){
		aleatorio = rand()%1000;
		v[i] = aleatorio;
		printf("%i |",v[i]);		
	}
	
	
	imprimir(v);
	
	
	burbuja(v);
	
}






main(){

printf("METODO DE LA BURBUJA - ORDENACIÓN \n");
cargar_vector();
system("pause");


}
