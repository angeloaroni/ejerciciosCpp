#include "string"
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    string nombre = argv[1];
    int veces = atoi(argv[2]);//atoi convierte uun string a int
    for (int i = 0; i < veces; i++)
    {
        cout << nombre << " ";
    }
    return 0 ;
}