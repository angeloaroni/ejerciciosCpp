// Queremos guardar una coleccion indeterminada de objetos
// (nombre-char) y cantidad-int , 
//lo guardaremos en un archivo y podremos leer de el
// 
// ordenaremos nuestra coleccion por nombre

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;
	char *nombre[25];
	int *cantidad;
	int contador=0;
	int opcion;
	string s;
	
void agregar(){
	nombre[contador]=(char*)malloc (100*sizeof(char));
	cout << "intro nombre: " << endl;
	getline(cin,s);
	strcpy(nombre[contador],s.c_str());
	cout << "intro cantidad: " << endl;
	cin >> cantidad[contador];
	contador++;
	
}

void ver_vectores(){
	for(int x=0;x<contador;x++){
		cout << "Nombre: " << nombre[x] << endl;
		cout << "Cantidad: " << cantidad[x] << endl;
	}
		
}

void eliminar_objeto(){
	if(contador== 0){
		cout << "esta vacia";
	}else{
		contador--;
	}
}

void guardar_en_archivo(){
	ofstream escritura;
	escritura.open("onjetos.txt");
	for(int x=0;x<contador;x++){
		escritura << nombre[x] << endl;
		escritura << cantidad[x] << endl;
		
	}
	escritura.close();
	
}
void ver_archivo(){
	ifstream lectura;
	lectura.open("onjetos.txt");
	while(getline(lectura,s)){
		cout << s << endl;
	}
	lectura.close();
}
void ordenar(){
	string texto;
	int numero;
	 for (int i=0;i<contador-1;i++){
	 	for (int j=i+1;j<contador;j++){
	 		
	 		
	 		if ((string)nombre[i]>(string)nombre[j]){
	 			texto=nombre[i];
	 			strcpy(nombre[i],nombre[j]);
	 			strcpy(nombre[j],texto.c_str());
	 			
	 			numero = cantidad[i];
	 			cantidad[i]=cantidad[j];
	 			cantidad[j]=numero;
			 }
	 		
		 }
	 }
	
}


int main(int argc,char *argv[]){
	cantidad=(int*)malloc(100*sizeof(int));
	
	do{
		cout << "1.- agregar objeto" << endl ;
		cout << "2.- ver coleccion desde vector" << endl;
		cout << "3.- ver coleccion desde archivo" << endl;
		cout << "4.- eliminar objeto (PILA)" << endl;
		cout << "5.- guardar coleccion en archivo" << endl;
		cout << "6.- ordenar objetos" << endl;
		cout << "99.- Salir, exit, arrivederchi, sayonara baby" << endl;
		cout << "intro opcion: " << endl;
		cin >> opcion;
		cin.ignore();
		switch(opcion){
			
			case 1:{
				agregar();
				break;
			}
			case 2:{
				ver_vectores();
				break;
			}
			case 3:{
				ver_archivo();
				break;
			}
			
			case 4:{
				eliminar_objeto();
				break;
			}
			
			case 5:{
				guardar_en_archivo();
				break;
			}
			case 6:{
				ordenar();
				break;
			}
		}
	}while(opcion!=99);
 
	
	
	return 0;
	
}

