//crea fichero de texto, agrega contenido y lo muestra por pantalla
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char cadena[128];
    //crea un fichero de salida
    ofstream fs("hola.txt");

    //envia una cadena al fichero de salida
    fs << "Hola mundoo" << endl;
    //cerramos el fichero
    fs.close();

    //abre el fichero de entrada
    ifstream fe("hola.txt");

    //leemos con getline
    fe.getline(cadena, 128);
    cout << cadena << endl;

    return 0;
}