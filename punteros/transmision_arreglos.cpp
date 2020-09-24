/*
Usar transmision de direcciones para 
arreglos.

Objetivo: saber como podemos enviar arreglos como punteros
a traves de los parametros de la funcion.

Ejercicio: Hallar el maximo elemento de una array.
*/

//libs
#include<iostream>
#include<vector>
#include<stdlib.h> //importa new y delete en arreglos dinamicos
using namespace std;

//prototipos
int mayor(int *, int); //&arr, size

vector <int> vect;

//main
int main(){
	const int size = 5;
	int arr[size] = {1, 54, 654, 35, 6};
	cout<<"El maximo valor hallado fue: "<<mayor(arr, size)<<endl;

	return 0;
}

//definiciones
int mayor(int *arr , int size){
	int Mayor = 0;

	for(int i = 0; i < size; i++){

		if(*(arr + i) > Mayor){

			Mayor = *(arr + i);
		}
	}
	return Mayor;
}
