 //escriba un programa que devuelva
//la parte fraccionaria de un numero
//ingresado por el usuario

//paquetes
#include<iostream>
using namespace std;

//plototipos
void pedir_numeros();
double parte_decimal(double num);
double numero;

//el main
int main(){
	double result;
	pedir_numeros();
	//cout<<"Ingrese el numero deseado: ";
	//cin>>numero;

	result = parte_decimal(numero);
	cout<<"\nEl resultado es: "<<result<<endl;
	return 0;
}

//declarando las funciones
void pedir_numeros(){

	cout<<"Digite el numero: ";
	cin>>numero;
}

double parte_decimal(double num){

	double resultado;
	resultado = num - int(num);
	return resultado;

}
