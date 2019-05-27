#include<string>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, num3, num4;
    string linea;

    try
    {
        cout << "Introduce primer numero: ";
        if(cin >> num1){
            cout << "Introduce segundo numero: ";
            cin  >> num2;
        }else{
            throw 200;//captura el error
        } 
        //creamos fichero de escritura
        ofstream escritura;
        escritura.open("division.txt");
        escritura << num1 << endl;
        escritura << num2 << endl;
        escritura.close();

        //abrimos fichero
        ifstream lectura;
        if(!lectura.is_open()){
            lectura.open("division.txt");

            getline(lectura,linea);
            num3 = atoi(linea.c_str());
            getline(lectura,linea);
            num4 = atoi(linea.c_str());
            cout << "Division: " << num3/num4 << endl;
            lectura.close();
        }else{
            throw 101;
        }
    }
    catch(int error)
    {
        switch (error)
        {
        case 101:
            cout << "Error de escritura.." << endl;            
            break;
        case 200:
            cout << "Primer numero incorrecto" << endl;
            break;
        
        default:
            break;
        }
    }
    
    system("pause");
    return 0;
}
