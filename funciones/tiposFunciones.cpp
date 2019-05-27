#include <iostream>
using namespace std;
int bitcoin;

//con variable global
void cambiaBitcoin() {
	bitcoin = 200;
	cout << "bitcoin: " << bitcoin << endl;
}

//recibimos variable del main
void cambiaEuros(int euros) {
	euros = 324;
	cout << "Euros: " << euros;
}

//mandamos variables al main
int cambiaPesetas() {
	int pesetas;
	pesetas = 2000;
	return pesetas;	
}

int main() {
	//mandamos variable a la funcion cambiaEuros
	int euros = 0;
	cambiaEuros(euros);//manda la variable que esta dentro de los ()
	/////////////////////////////////////////////


	//recibimos varibale de la funcion cambiaPesetas
	int pesetas;//esta variable no tiene por que tener el mismo nombre de la variable de la funcion 
	pesetas = cambiaPesetas();
	cout << "Pesetas: " << pesetas;
	////////////////////////////////////////////////


	cambiaBitcoin();
	bitcoin = 4332;
	cout << "bitcoin: " << bitcoin;
	cambiaBitcoin();

	return 0;
}