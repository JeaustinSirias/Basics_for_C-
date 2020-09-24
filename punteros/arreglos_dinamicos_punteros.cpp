/*
Un arreglo dinamico es el que permite
que su tamano sea el necesario de acurdo
con la cantidad de elementos

statements

new: reserva el numero de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado anteriormente

*/


//pedir al usuario n calificaciones y 
//almacenarlo en un arreglo dinamico
#include<iostream>
#include<stdlib.h> //importa new y delete en arreglos dinamicos
using namespace std;


//prototipos
int numCalif, *puntero;
void ask_notes();
void show_notes();


//main
int main(){

	ask_notes();
	show_notes();

	//liberar el espacio en bytes usado en el arr dinamico
	delete[] puntero; //usa [] porque es un array

	return 0;
}


//definiciones
void ask_notes(){

	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;

	puntero = new int[numCalif]; //arreglo de tipo entero

	//se piden las notas
	for(int i = 0; i < numCalif; i++){

		cout<<"Ingrese una nota: ";
		cin>>puntero[i];

	}
}

void show_notes(){

	cout<<"Mostrando notas de los usuarios:\n\n\n";

	for(int i = 0; i <numCalif; i++){

		cout<<puntero[i]<<endl;

	}
}