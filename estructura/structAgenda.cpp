//hacer que se ejecute programas por linea de comandos

// ej:   nombre_programa.exe 2  -->abre bloc de notas
#include "string"
#include <iostream>
using namespace std;

struct datos{
    string nombre;
    string apellidos;
    int telefono;
    int edad;
    float altura;
};
datos amigos[3];

int main(){
    for (int i = 0; i < 3; i++)
    {
        cout << "introduc nombre";
        cin >> amigos[x].nombre;
        cout << "introduc apellidos";
        cin >> amigos[x].apellidos;
        cout << "introduc telefono";
        cin >> amigos[x].telefono;
        cout << "introduc edad";
        cin >> amigos[x].edad;
        cout << "introduc altura";
        cin >> amigos[x].altura;
    }
    
    return 0;    
}