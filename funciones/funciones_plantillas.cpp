//como usa plantillas de funcion
//ejemplo: sacar el valor absoluto de un numero
//no importa si es int, float o double


//paquetes
#include<iostream>
using namespace std;


//prototipo de las funciones
template <class tipo_de_dato> //engloba distintos tipos de datos
void mostrar_abs(tipo_de_dato numero);//void es una func que no retorna nada

//el main
int main(){

	//variables
	int num1 = 4;
	float num2 = 57.32;
	double num3 = 43.49324;

	//llamadas a funciones
	mostrar_abs(num1);
	mostrar_abs(num2);
	mostrar_abs(num3);

	return 0;
}

//definiendo las funciones
template <class tipo_de_dato>
void mostrar_abs(tipo_de_dato numero){

	if(numero < 0){numero = numero * -1;}
	cout<<"El valor absoluto de numero es: "<<numero<<endl;
}