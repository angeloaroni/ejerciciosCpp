// CREA LA MAQUINA ENIGMA
// Se introduce un texto y debeis
// crear una operacion matematica que encripte ese texto.
// se guarda encriptado en archivo y luego lo leeis del archivo
// y lo desemcriptais para acceder al archivo se debe usa una contraseña.
// ej: "hoy es vienres"
// numero_aleatorio ej: +1
//     "ipz ft wjfsoft" --> se guarda al archivo

// PUNTEROS, VECTORES DINAMICOS
// VALORES ALEATORIOS

#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    char *frase;
    char *encriptada;
    srand(time(NULL));//generamos el num aleatorio
    int aleatorio;
    string previo;//paso intermedio luego usamos en getline() para luego todo esto para pasar a frase que es un vector de char
    int tamanoPrevio;//para almacenar la cantidad de letras de previo
    //inicializa los vector dinamico
    frase = (char*) malloc(sizeof(char));
    encriptada = (char*) malloc(sizeof(char));
    //pedimos frase
    cout << "Introduce frase: ";
    getline(cin, previo);

    tamanoPrevio = previo.length();
    previo.copy(frase, tamanoPrevio);//copia solo un numero concreto de caracteres 
    //strcpy(frase, previo.c_str());//copiaria toda  lo de previo a frase

    aleatorio = rand()%10+1;//va del (0 al 9) +1 , osea del 1 al 10
    for (int i = 0; i < previo.length(); i++)
    {
        encriptada[i] = frase[i] + aleatorio;
    }
    cout << "Aleatorio usuado: " << aleatorio << endl;
    cout << "Frase encriptada: " << encriptada << endl;
    
    //abrimos fichero en modo escritura
    ofstream escritura;
    escritura.open("enigma.txt");
    escritura << encriptada;
    escritura.close();

    string linea;
    char *letra;
    letra = (char*)malloc(sizeof(char));

    ifstream lectura;
    lectura.open("enigma.txt");
    getline(lectura, linea);
    cout << "desencriptado: ";

    for (int x = 0; x < previo.length(); x++)
    {
        letra[x] = linea[x] - aleatorio;
        cout << letra[x];
    }
    lectura.close();
    return 0;

}
