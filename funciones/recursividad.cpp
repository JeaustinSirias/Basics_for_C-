//un ejemplo de como usar la recursividad
//Una func recursiva es la que se llama a ella misma

//modulos
#include<iostream>
using namespace std;


//prototypes
void ask_num();
int fact(int);
void print();

int n;

//main
int main(){

	ask_num();
	//fact(var);
	print();

	return 0;
}

//definitions

void ask_num(){

	cout<<"Digite el numero para procesar: ";
	cin>>n;
}

int fact(int num){

	if(num == 0){
		num = 1;
	}

	else{

		num = num * fact(num - 1);
	}

	return num; 
}

void print(){

	cout<<"El factorial es: "<<fact(n)<<endl;
}

