//pide numero que se lo pase a la funcion y qu emudeivida / 7 y lo muestre todo po n punteros.
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void dividir(float *punteroNumero){//long *punteroDistancia forma de declarar un puntero
    cout << *punteroNumero << "/7 = "<< *punteroNumero/7 << endl;
}
int main(){
    float numero;
    float *punteroNumero;

    punteroNumero = &numero; //&distancia posicion de la memoria
    cout << "Introduce numero: ";
    cin >> *punteroNumero;
    dividir(punteroNumero);
    system("pause");
    return 0;
}