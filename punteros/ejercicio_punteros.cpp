/*
*Pedir al usuario n numeros, almacenarlos en un arreglo 
*dinamico, ordenar los elementos en forma ascendente y
*finalmente mostrarlos en pantalla
*/

//libs
#include<iostream>
#include<stdlib.h>
using namespace std;

//prototipos
void pedir_numeros();
void ordenar_numeros(int *, int);
void mostrar_numeros();

//global
int size, *puntero;


//main
int main(){
	pedir_numeros();
	ordenar_numeros(puntero, size);
	mostrar_numeros();

	delete[] puntero;

	return 0;
}


//definiciones
void pedir_numeros(){

	cout<<"Digite la cantidad de numeros a ingresar: ";
	cin>>size;

	//definir el numero de bloques de memoria 
	puntero = new int[size];

	for(int i = 0; i < size; i++){

		cout<<"Digite el elemento "<<i+1<<" del array: ";
		cin>>puntero[i];
	}
}

void ordenar_numeros(int *arr, int size){

	//usando el insertion sort para ordenar el arreglo

	int i, indice_actual, aux;

	for(i = 0; i < size; i++){

		indice_actual = i;
		aux = *(arr + i);

		while(indice_actual > 0 && *(arr + indice_actual - 1) > aux){

			*(arr + indice_actual) = *(arr + indice_actual - 1);
			indice_actual--;
		}

		*(arr + indice_actual) = aux;
	}
}

void mostrar_numeros(){

	for(int i = 0; i < size; i++){

		if(i == size - 1){

			cout<<*(puntero + i)<<endl;;
		}

		else{
			cout<<*(puntero + i)<<", ";
		}
	}
}