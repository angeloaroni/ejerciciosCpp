//catalogo de bebidas, guarda nombre, tipo, cantidad Usando escructura
//1.- Alta bebida
//2.- Baja bebida
//3.- Modifica bebida
//4.- Mostrar bebida
//5.- Salir


#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;



int main(){
	
	struct Producto {
		string codigo;
		string nombre;
		string tipo;
		string cantidad;
	};

	Producto bebidas[3];

	int opcion=0;
	string eliminar;
	string modificar;


	do{
		system("CLS");
		cout << "1.- Alta bebida" << endl;
		cout << "2.- Baja bebida" << endl;
		cout << "3.- Modifica bebida" << endl;
		cout << "4.- Mostrar bebida" << endl;
		cout << "5.- Salir" << endl;
		cout << "Elija opcion ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				cout << "Ingresar codigo:" << endl;
				cin >> bebidas[i].codigo;
				cout << "Nombre:" << endl;
				cin >> bebidas[i].nombre;
				cout << "Tipo:" << endl;
				cin >> bebidas[i].tipo;
				cout << "cantidad" << endl;
				cin >> bebidas[i].cantidad;				
			}
			
			break;
		case 2:
			cout << "Ingrese codigo de bebida a eliminar: ";
			cin >> eliminar;
			for (int i = 0; i < 3; i++)
			{
				if (eliminar == bebidas[i].codigo) {
					bebidas[i].codigo = "";
					bebidas[i].nombre = "";
					bebidas[i].tipo = "";
					bebidas[i].cantidad = "";
				}
				else {
					cout << "Id incorrecto..." << endl;
					system("pause");
					break;
				}

			}
			break;			
		case 3:
			cout << "Ingrese nombre de bebida a modificar: ";
			cin >> modificar;
			for (int i = 0; i < 3; i++)
			{
				if (modificar == bebidas[i].nombre) {
					cout << "Ingresar id:" << endl;
					cin >> bebidas[i].codigo;
					cout << "nombre:" << endl;
					cin >> bebidas[i].nombre;
					cout << "Tipo:" << endl;
					cin >> bebidas[i].tipo;
					cout << "cantidad" << endl;
					cin >> bebidas[i].cantidad;
					cout << "cantidad" << endl;
				}
				else {
					cout << "La bebidad " << modificar << " no existe.." << endl;
					system("pause");
					break;
				}

			}
			break;
		case 4:
			cout << endl;
			cout << "Lista de  bebidas" << endl;
			cout << "------------------------------" << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << "Codigo: " << bebidas[i].codigo << endl;
				cout << "Nombre: " << bebidas[i].nombre ;
				cout << " Tipo: " << bebidas[i].tipo << endl;
				cout << "Cantidad: " << bebidas[i].cantidad << endl;
				cout << "------------------------------" << endl;
			}
			system("pause");
			break;
		case 5:
			cout << "Adios....";
			break;
		default:
			cout << "Opcion incorrecta";
			break;
		}
	} while (opcion != 5);

	
	return 0;
}
