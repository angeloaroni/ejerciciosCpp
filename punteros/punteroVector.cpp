#include <iostream>
using namespace std;

int main(){
    int vector[2];
    int *punteroVector;
    punteroVector = vector;

    *punteroVector = 55;
    *(punteroVector + 1) = 22;

    cout << *punteroVector << endl;
    cout << *(punteroVector+1) << endl;

    system("pause");
    return 0;
}