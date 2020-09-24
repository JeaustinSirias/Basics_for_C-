//un ejemplo de recursividad de la suma
/*algoritmo:
	
	suma(n) = 1, si n = 1
	n + suma(n - 1), si n > 1 

*/

//libs
#include<iostream>
using namespace std;

//global vars
int suma = 0;


//prototipos
int sumar(int);


//main


//definiciones
int sumar(int n){

	if(n == 1){suma = 1;}
	else{suma = n + sumar(n - 1);}
	return suma; 
}
