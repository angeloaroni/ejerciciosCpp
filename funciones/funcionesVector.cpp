//crea un verotr de 10 enteros
//llena el vector con numeros aleatorios
//calcula la media de todos los numeros
//CADA PASO EN FUNCIONES DIFERENTES
#include <iostream>
#include <time.h>
using namespace std;
int numero[10];
float media;

void llenaVector() {
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		numero[i] = rand() % 50;
	}
}
float calculaMedia() {	
	for (int i = 0; i < 10; i++)
	{
		media = (numero[i] + media);
	}
	media = media / 10;
	return media;
}
//mostrar un vector
void v2(int num[10]) {

	cout << num[0];
	cout << num[1];

}


int main() {
	llenaVector();
	float res = calculaMedia();
	cout << "la media es: " << res;

	//para la funcion del vector
	int  num[10];
	num[0] = 12;
	num[1] = 14;
	v2(num);
}