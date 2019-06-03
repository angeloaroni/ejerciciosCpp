#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



insercion(int v[50]){
    int j, m;

    for (int i = 0; i < 50; i++)
    {
        m = v[i];   
        j = i-1;
        while (v[j] > m && j > -1){
            v[j+1] = v[j];
            j--;
        }
        v[j + 1] = m;
    }
    cout << "Vector ordenado\n";
	for (int i=0;i<50;i++){
		cout << v[i] << " - ";
	}
}
void cargaVector(){
    int v[50];
    int i;
    int aleatorio;
    cout << "Vector sin ordenar...." << endl;
    for (int i = 0; i < 50; i++)
    {   
        aleatorio = rand()%100;
        v[i] = aleatorio;
        cout << v[i] << " - " ;
    } 
    insercion(v);   
}

int main(int argc, char const *argv[])
{   
    cargaVector();
    return 0;
}
