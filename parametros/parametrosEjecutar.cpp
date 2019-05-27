//hacer que se ejecute programas por linea de comandos
// nombre_programa ayuda -> muestra posibilidades
// 1.- calculadora
// 2.- notepad
// 3.- dxdiag
//
// ej:   nombre_programa.exe 2  -->abre bloc de notas
#include "string"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    string argumento = argv[1];
    if(argumento == "ayuda"){
        cout << "1.- para abrir calculadora" << endl;
        cout << "2.- para abrir notepad" << endl;
        cout << "3.- para abrir dialogo" << endl;    
    }
    if(argumento == "1")
        system("calc");
    if(argumento == "2")
        system("notepad");
    if(argumento == "3")
        system("dxdiag");    
}