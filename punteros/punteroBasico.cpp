#include<iostream>
using namespace std;

void convertir(long *punteroDistancia){
    cout << "Distancia: " << *punteroDistancia << endl;
}

int main(){
    long distancia;
    long *puntero_distancia = NULL;

    puntero_distancia = &distancia;

    cout << "Introduce la distancia: ";
    cin >> *puntero_distancia;
    cout << "posicion de memoria-> " << puntero_distancia << endl;

    convertir(puntero_distancia);

    system("pause");
    return 0;
}