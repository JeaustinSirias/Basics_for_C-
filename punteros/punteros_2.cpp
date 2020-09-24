//Ejercicio: Comprobar si un numero es par o no,
//indicar la posicion de mem donde se guarda el 
//numero usando punteros.

//libs
#include<iostream>
using namespace std;

//main
int main(){

	int num, *puntero;
	puntero = &num;

	cout<<"Digite un numero entero positivo: ";
	cin>>*puntero;

	if(*puntero % 2 == 0){

		cout<<"El numero es par."<<endl;
		cout<<"La direccion de mem es:"<<puntero<<endl;
	}

	else{

		cout<<"El numero es impar."<<endl;
		cout<<"La direccion de mem es:"<<puntero<<endl;
	}

	return 0;
}