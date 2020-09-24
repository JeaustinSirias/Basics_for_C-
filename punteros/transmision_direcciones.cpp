/*
Usar transmision de direcciones para 
cambiar el valor de 2 variables
*/

//libs
#include<iostream>
#include<stdlib.h> //importa new y delete en arreglos dinamicos
using namespace std;


//prototipos
//UNA VARIABLE PUNTERO ALMACENA UNA DIRECCION DE MEMORIA
//para pasar variables de tipo puntero hay que fijarlo en el prototipo
void intercambio(float *, float *); //el * indica que se va a pasar la dir



//main
int main(){
	float num1 = 20.4, num2 = 6.78; //&num1 indicaria la dir en mem

	cout<<"Primer numero: "<<num1<<endl;
	cout<<"Segundo numero: "<<num2<<endl;

	//llamar a la funcion intercambio
	intercambio(&num1, &num2);

	cout<<"Despues del intercambio:\n";
	cout<<"El primer numero es: "<<num1<<endl;
	cout<<"El segundo numero es: "<<num2<<endl;
	
	

	return 0;
}


//definiciones
void intercambio(float *dir1, float *dir2){
	float aux;

	aux = *dir1;
	*dir1 = *dir2;
	*dir2 = aux;

}

