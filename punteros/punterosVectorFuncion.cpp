#include <iostream>
using namespace std;

void cargarNombres(string *punteroNombres){
    for (int i = 0; i < 3; i++)
    {
        cout << "Introduce nombre: ";
        cin >> *(punteroNombres + i);
    }    
}

void mostrarNombres(string *punteroNombres){
    for (int i = 0; i < 3; i++)
    {
        cout << *(punteroNombres + i) << endl;
    }    
}

int main(){
    string nombres[3];
    string *punteroNombres;
    punteroNombres = nombres;
    cargarNombres(punteroNombres);
    mostrarNombres(punteroNombres);

    system("pause");
    return 0;
}