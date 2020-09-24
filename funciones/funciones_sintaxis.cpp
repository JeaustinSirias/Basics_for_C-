/*Las funcines en c++ tienen una sintaxis particular. 
en general mi documento debe tener la siguiente forma:

1. Instrucciones del preprocesador
	2. Prototipo de la funcion
		3. El main
			4. las funciones */


//instrucciones del procesador
#include<iostream>
using namespace std;

//prototipos de las funciones
int int_sum(a, b);

//el main
int main(){

	int a, b, suma;
	cout<<"Digite dos numeros enteros: "; cin>>a>>b;

	//se llama la funcion
	suma = int_sum(a, b);
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	return 0;
}

//definiciones de las funciones
int int_sum(int a, int b){

	int resultado = a + b;
	return resultado;
}

