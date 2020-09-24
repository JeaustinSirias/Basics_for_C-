/*
Ejercicio: Rellenar un arreglo con n 
numeros, luego usar punteros para determinar
el menor elemento del arreglo
*/


//libs
#include<iostream>
using namespace std;

//main
int main(){

	int arr[6];
	int *punteros;
	int minimo;
	int puntero_min;

	//se fija la dir del primer elemento de arr
	punteros = arr; 

	//insertando valores:
	for(int i = 0; i < 6; i++){

		cout<<"Ingrese el elemento "<<i+1<<" del array: ";
		cin>>arr[i];
	}

	//buscando el minimo elemento
	for(int i = 0; i < 6; i++){

		if(i == 0){

			minimo = *punteros;
			//puntero_min = punteros;
		}

		else if(*punteros < minimo){

			minimo = *punteros;
			//puntero_min = punteros;
			
		}
		
		punteros++;
	}

	cout<<"El valor minimo del array es: "<<minimo<<endl;
	cout<<"Posicion en memoria: "<<punteros<<endl;


	return 0;
}