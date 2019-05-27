//adivinar un numero generado aleatorioamente numero untroducido por parametro
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char  *argv[])
{
    int argumento = atoi(argv[1]);//aotio convierte un texto a numero
    int aleatorio;
    srand(time(NULL));

    aleatorio = rand()%5+1;
    if (argumento == aleatorio)
        cout << "Asierto!!!";
    else    
        cout << "En numero era: "<< aleatorio;
    return 0;
}
