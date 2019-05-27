//ver contar los parametros introducidos por teclado
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char  *argv[])
{
    cout << "total de parametros: " << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Parametro " << i << ": " << argv[i] << endl;
    }
    system("pause");
    return 0;
}
