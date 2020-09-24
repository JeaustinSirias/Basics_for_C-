/*
Un puntero es una variable que 
almacena la direccion de memoria
en donde se almacena otra variable

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n
*/


//ejemplo

#include<iostream>
using namespace std;

int main(){

	int num = 14, *puntero;

	puntero = &num;


	cout<<"contenido: "<<*puntero<<endl;
	cout<<"direccion: "<<puntero<<endl;

	return 0;
}

