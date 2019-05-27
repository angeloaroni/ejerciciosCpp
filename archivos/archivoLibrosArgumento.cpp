// mantener un archivo de  3 libros, titulo y autor
//
// pasaremos por consola un argumento
// si es guardar , que pida pr teclado los datos y los guarde 
//en el archivo
// y es mostrar, que los lea del archivo y los muestre
// y si es buscar que busque la palabra y que muestra la linea del contenido
#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

struct libreria{
    int libro;
    string titulo;
    string autor;
};
libreria cultura[3];

void cargaFichero(){
    ofstream libros;
    libros.open("libro.txt");
    for (int i = 0; i < 3; i++)
    {
        cout << "Introduce numero de libro" << endl;
        cin >> cultura[i].libro;
        cout << "Introduce titulo de libro" << endl;
        cin >> cultura[i].titulo;
        cout << "Introduce autor de libro" << endl;
        cin >> cultura[i].autor;
        //escribimos en le fichero
        libros << "Libro " << cultura[i].libro << " : " << cultura[i].titulo << " : " << cultura[i].autor << endl;
    }
    libros.close();
}

void buscaFichero(){
    ifstream libreria;
    libreria.open("libro.txt");
    string palabra, linea, linea_econtrada;
    cout << "Introduce palabra a buscar: ";
    cin >> palabra;    
    while (getline(libreria, linea)){
		if(linea.find(palabra) == -1)
            linea_econtrada = "No existe";
        else{
            linea_econtrada = linea;
            break;            
        }
	}
    cout << "Econtrado: " << linea_econtrada << endl;
    libreria.close();    
}

void muestrasFichero(){
    ifstream libreria;
    libreria.open("libro.txt");
    string linea;
    while (getline(libreria, linea))
    {
        cout << linea << endl;
    }
    libreria.close();
}

int main(int argc, char *argv[])
{
    string argumento = argv[1];
    if(argumento == "guarda")
        cargaFichero();
    else if (argumento == "buscar")
        buscaFichero();    
    else if (argumento == "mostrar")
        muestrasFichero();    
    else 
        cout << "argumento invalido..." << endl;

    system("pause");    
    return 0;
}
