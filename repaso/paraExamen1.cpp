///////PUEDE ENTRAR EN EXAMEN////////////
// queremos guaRdar 3 pedidos de entre 1 y 6 articulos (id, nombre, precio)
// y los pedidos (nombre, articulo, cantidad), ordena, alta pedido, baja pedido
// un pedido (como PILA),
// alta articulos
// ver articulos
// ver pedidos
// grabar pedido en archivo
//OJO(un vectore de struct por cada pedido)
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
//struct de articulos
struct articulos
{
	int id;
	string nombre;
	float precio;
};
articulos vectorArticulos[6];
int numArticulo = 0;
//struct de pedidos
struct pedido1
{
	string nombre;
	string articulo;
	int cantidad;
};
pedido1 vectorPedidos[3];

int indPila = 0; 

void altaArticulo(){
	string s;
	for (int i = 0; i < 3; i++)
	{
		cout << "Introduce id: ";
		cin >> vectorArticulos[i].id;
		
		cout << "Introduce nombre: ";
		cin >> vectorArticulos[i].nombre;
		//getline(cin, s);
		//vectorArticulos[i].nombre = s;
		//cin.ignore();//para el salto de linea del getline

		cout << "Introduce precio: ";
		cin >> vectorArticulos[i].precio;
		numArticulo++;		
	} 
	
}
void verArticulo(){
	for (int i = 0; i < 3; i++){
		cout << "----------------------------" << endl;
		cout << "Id: " << vectorArticulos[i].id << endl;
		cout << "Nombre: " << vectorArticulos[i].nombre << endl;
		cout << "Precio: " << vectorArticulos[i].precio << " euros" << endl;
		cout << "----------------------------" << endl;
	}
	cout << "Total articulos: " << numArticulo << endl;
}

void bajaArticulo(){
	string artiEliminar;
	cout << "Que articulo desea eliminar...?  ";
	cin >> artiEliminar;
	for (int i = 0; i < numArticulo; i++)
	{
		if (vectorArticulos[i].nombre == artiEliminar )
		{
			vectorArticulos[i].id = 0;
			vectorArticulos[i].nombre = "";
			vectorArticulos[i].precio = 0, 0;
			cout << "Articulo elimindao correctamente! " << endl;
			break;
			system("pause");
		}
		else
		{
			cout << "El articulo " << artiEliminar << " no existe..." << endl;
			//break;
			system("pause");
		}
	}
}

void altaPedido(){
	if(indPila == 6){
		cout << "Pila de pedidos llena..." << endl;
	}else{

		cout << "Nombre: " ;
		cin >> vectorPedidos[indPila].nombre;
		cout << "Articulo: " ;
		cin >> vectorPedidos[indPila].articulo;
		cout << "Cantidad: " ;
		cin >> vectorPedidos[indPila].cantidad;
		indPila++;
	}   

}
void verPedidos(){
	for (int i = 0; i < indPila; i++)
	{
		cout << "-----------------" << endl;
		cout << "Nombre - " << vectorPedidos[i].nombre << endl;
		cout << "Articulo - " << vectorPedidos[i].articulo << endl;
		cout << "Cantidad - " << vectorPedidos[i].cantidad << endl;
		cout << "-----------------" << endl;
	}	
}
void bajaPedidoPila(){
	if(indPila == 0)
		cout << "Pedidos pila vacio...." << endl;
	else
		indPila--;
	
}
void ordenaBurbuja(){
	string arti;
	string nomb;
	int cant;
	for (int i = 0; i < indPila-1; i++)
	{
		for (int x = i + 1; x < indPila; x++)
		{
			if (vectorPedidos[i].nombre > vectorPedidos[x].nombre)//(string) obliga al vector que lo trate como un string y ordena toda la cadena
			{
				//usamos strcpy por que es un estring de 2 palabras                
				nomb = vectorPedidos[i].nombre;
				vectorPedidos[i].nombre = vectorPedidos[x].nombre;
				vectorPedidos[x].nombre = nomb;
				//para pasar el id
				arti = vectorPedidos[i].articulo;
				vectorPedidos[i].articulo = vectorPedidos[x].articulo;
				vectorPedidos[x].articulo = arti;
				//para pasar el precio
				cant = vectorPedidos[i].cantidad;
				vectorPedidos[i].cantidad = vectorPedidos[x].cantidad;
				vectorPedidos[x].cantidad = cant;
			}
			
		}
	}   
}
void grabarPedido(){
	ofstream escritura;
	escritura.open("pedido.txt");
	for (int i = 0; i < indPila; i++)
    {    
        escritura << vectorPedidos[i].nombre << endl;        
        escritura << vectorPedidos[i].articulo << endl;       
        escritura << vectorPedidos[i].cantidad << endl;       
    }    
    escritura.close();
}
int main(int argc, char const *argv[])
{
	int opcion = 0;

	do
	{   
		system("CLS");
		cout << "---------------MENU---------------"<< endl;
		cout << "1.- Alta de articulos" << endl;
		cout << "2.- Ver articulos" << endl;
		cout << "3.- Baja articulos" << endl;
		cout << "4.- Alta pedido" << endl;
		cout << "5.- Ver pedidos" << endl;
		cout << "6.- Baja pedido" << endl;
		cout << "7.- Baja pedido (con PILA)" << endl;
		cout << "8.- Ordenar pedidos" << endl;
		cout << "9.- Grabar pedido en archivo" << endl;
		cout << "10.- Salir" << endl;
		cout << "Introduce opcion: " ;
		cin >> opcion;
		cin.ignore();//para el salto de linea del getline

		switch (opcion)
		{
			case 1:
				altaArticulo();
				break;
			case 2:
				verArticulo();
				system("pause");
				break;        
			case 3:   
				bajaArticulo();   
				system("pause");
				break;        
			case 4:
				altaPedido();
				break;        
			case 5:
				verPedidos();   
				system("pause");           
				break;        
			case 6:
			   
				break;        
			case 7:
				bajaPedidoPila();              
				system("pause");                           
				break;        
			case 8:
				ordenaBurbuja();                                           
				break;        
			case 9:
				grabarPedido();
				break;        
			default:
				break;
		}
		
	} while (opcion != 10);
	return 0;
}
