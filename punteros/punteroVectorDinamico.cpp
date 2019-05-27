#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int *vector;//creea puntero
    vector = (int*) malloc (sizeof(int));//reservar u nespacio en memoria

    vector[0] = 12;
    vector[1] = 0;
    vector[2] = 0;
    vector[3] = 345;

    cout << vector[0] << endl;
    cout << vector[1] << endl;
    cout << vector[2] << endl;
    cout << vector[3] << endl;

    return 0;
}

