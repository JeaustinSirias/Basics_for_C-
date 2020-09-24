/*Ejercicio 20: Realice una función recursiva para la serie Fibonacci 
Nota: La serie de Fibonacci está formada por la secuencia de números: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34... 

	fibonacci(n) = n                              , si n<2
				   fibonacci(n-1)+fibonacci(n-2)  , si n>=2

*/

#include<iostream>
using namespace std;

//prototipos
void input_num();
int fib(int);

//global vars
int n;

//main
int main(){
	input_num();

	for(int i = 0; i < n; i++){
		cout<<fib(i)<<", ";
	}
	return 0;
}


//definiciones
void input_num(){

	do{
		cout<<"Digite el tope maximo de la sucesion: ";
		cin>>n;

	}while(n < 0);
}

int fib(int n){

	if(n < 2){

		return n;
	}

	else{

		return fib(n-1) + fib(n-2);
	}
}

