//introduce un unico parametro tipo string y que muestre cuantos caracteres tiene
#include "string"
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string texto;
    texto = argv[1];
    cout  << texto << " tiene " << texto.length() << " caracteres";
    return 0;
}