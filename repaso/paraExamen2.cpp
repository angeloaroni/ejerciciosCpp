// PUEDE ENTRAR EN EL EXAMENNNN
// queremos guardar una coleccion indeterminada de objetos
// (nombre-char) y cantidad-int, 
// los guardamos en un archivo y podremos leer de el 
//ordenamos nuestra coleccion por nombre...

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//vector dinamico para coleccion de objetos
char *nombre[20];
int *cantidad;
int numObjeto = 0;
string s;

void altaObjetos(){   
    //recomentable los malloc de los vectores de char esten en la mism afuncion en las qu se les llama  
    nombre[numObjeto] = (char*) malloc (100*sizeof(char));

    cout << "Introdusca nombre: ";
    //cin >> nombre[numObjeto];//solo acepta un apalabra sin espacios
    //pra que acepte mas de una palabra usamos getline y strcpy
    getline(cin, s);
    strcpy(nombre[numObjeto],s.c_str());
    //
    cout << "Introdusca cantidad: ";
    cin >> cantidad[numObjeto];
    numObjeto++;
    
}
void verObjetos(){
    cout << "Lista de  objetos" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < numObjeto; i++)
	{
		cout << "Nombre: " << nombre[i] << endl;
		cout << "Cantidad: " << cantidad[i] << endl ;
		cout << "------------------------------" << endl;
	}
	
}
void verArchivo(){
    ifstream lectura;
    lectura.open("coleObjetos.txt");
    while(getline(lectura,s)){
        cout << s << endl;
    }
    lectura.close();
}
void guardaArchivo(){
    ofstream escritura;//abrimos archivos en escritura    
    escritura.open("coleObjetos.txt");
    for (int i = 0; i < numObjeto; i++)
    {    
        escritura << nombre[i] << endl;        
        escritura << cantidad[i] << endl;       
    }    
    escritura.close();
}

void eliminarPila(){
    if(numObjeto == 0)
        cout << "esta vacio";
    else
        numObjeto--;        
}

void ordenaBurbuja(){
    string texto;
    int num;
    for (int i = 0; i < numObjeto-1; i++)
    {
        for (int x = i + 1; x < numObjeto; x++)
        {
            if ((string)nombre[i] > (string)nombre[x])//(string) obliga al vector que lo trate como un string y ordena toda la cadena
            {
                //usamos strcpy por que es un estring de 2 palabras                
                texto = nombre[i];
                strcpy(nombre[i] , nombre[x]);
                strcpy(nombre[x] , texto.c_str());
                //no usamos strcpy por que es un entero
                num = cantidad[i];
                cantidad[i] = cantidad[x];
                cantidad[x] = num;
            }
            
        }
    }   
}

int main(int argc, char const *argv[])
{
    //recomentable que los malloc de INT esten dentro del MAIN
    cantidad = (int*) malloc (100*sizeof(int));

    int opcion = 0;

    do
    {   
        system("CLS");
        cout << "----------MENU---------------"<< endl;
        cout << "1.- Alta de objeto" << endl;
        cout << "2.- Ver coleccion desde el vector" << endl;
        cout << "3.- Ver coleccion desde archivo" << endl;
        cout << "4.- Eliminar objeto (pila)" << endl;
        cout << "5.- Guarda coleccion en archivo" << endl;
        cout << "6.- Ordenar objetos" << endl;
        cout << "7.- Salir" << endl;
        cout << "Introduce opcion: " ;
        cin >> opcion;
        cin.ignore();//para el salto de linea del getline

        switch (opcion)
        {
            case 1:
                altaObjetos();    
                break;
            case 2:
                verObjetos();
                system("pause");
                break;        
            case 3:   
                verArchivo();
                system("pause");
                break;        
            case 4:
                eliminarPila();
                break;        
            case 5:
                guardaArchivo();                
                break;        
            case 6:
                ordenaBurbuja();
                break;        
            default:
                break;
        }
        
    } while (opcion != 7);
    
    return 0;
}
