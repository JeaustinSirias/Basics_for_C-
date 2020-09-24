/*
*Hacer una func que almacene n elementos
*en un arreglo dinamico. Usar una func
*adicional para hacer busqueda de un elemento.
*/


//librerias
#include<iostream>
#include<stdlib.h>
using namespace std;

//prototipos
void pedir_numeros();
void buscar_elemento(int);

//variables globales
int size, *puntero;

//el main
int main(){
	int elemento;
	pedir_numeros();

	cout<<"Digite el elemento que desea buscar en el array: ";
	cin>>elemento;
	
	buscar_elemento(elemento);

	delete[] puntero;

	return 0;
}

//definiciones
void pedir_numeros(){

	cout<<"Digite el tamano del array: ";
	cin>>size;

	//creando espacio en mem:
	puntero = new int[size];

	for(int i = 0; i < size; i++){

		cout<<"Digite el elemento "<<i+1<<" del array:";
		cin>>puntero[i];
	}
}

void buscar_elemento(int n){
	int index = 0, r = 0;

	while(index < size){

		if(*(puntero + index) == n){

			cout<<n<<" se encuentra en el array.";
			r = 1;
			break;
		}

		index++;
	}

	if(r == 0){

		cout<<"No existe el elemento "<<n<<" en el array"<<endl;
	}
}