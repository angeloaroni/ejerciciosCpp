#include <iostream>;
using namespace std;

void convertir(long *punteroDistancia){//long *punteroDistancia forma de declarar un puntero
    cout << "Distancia: " << *punteroDistancia * 0.2 << " leguas" << endl;
}
int main(){
    long distancia;
    long *puntero_distancia = NULL;

    puntero_distancia = &distancia; //&distancia posicion de la memoria
    cout << "Introduce distancia: ";
    cin >> *puntero_distancia;
    convertir(puntero_distancia);

    system("pause");
    return 0;
}