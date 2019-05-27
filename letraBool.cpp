#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
using namespace std;

int main(){
    char letra;
    bool acierto ;

    letra = ' ';
    acierto = true;
    cout << "Introducir un carater: ";
    cin >> letra;

    if (letra == 'A')
    {
        acierto = true;
    }else
    {
        acierto = false;
    }
    if (acierto == true)
    {
        cout << "Has acertado";
    }
    if ( acierto == false)
    {
        cout << "fallaste";
    }
    
    
    
}