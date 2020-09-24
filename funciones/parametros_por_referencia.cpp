//un ejemplo de como pasar parametros por referencia

//paquetes
#include<iostream>
using namespace std;

//prototipos
void valNuevo(int&, int&); //el '&' indica que estos valores seran accedidos desde la mem

//main
int main(){	

	int a = 20, b = 30;
	valNuevo(a, b);

	cout<<"el primer valor modificado es: "<<a<<endl;
	cout<<"el segundo valor modificado es: "<<b<<endl;

	return 0;
}

//declarando las funciones
void valNuevo(int& num1, int& num2){

	cout<<"el primer valor es: "<<num1<<endl;
	cout<<"el segundo valor es: "<<num2<<endl;

	num1 = 45;
	num2 = 60;
}	