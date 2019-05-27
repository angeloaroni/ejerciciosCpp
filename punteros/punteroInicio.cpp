#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int numero;
    int *punteroNumero;

    numero = 80;
    punteroNumero = &numero;

    cout << &numero << " corresponde a: " << numero << endl;
    *punteroNumero = 100;
    cout << "puntero: " << *punteroNumero << endl;
    cout << "numero: " << numero << endl;
    
    return 0;
}
