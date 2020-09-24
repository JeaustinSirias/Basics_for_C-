//un ejemplo sobre como usar la recursividad
//de una potencia en funciones y structs


//packs
#include<iostream>
using namespace std;


//prototipos


float base;
int expon;


void ask_params();
float pot(float, int);


//main
int main(){
	float res;
	ask_params();
	res = pot(base, expon);
	cout<<"Resultado: "<<res<<endl;

	return 0;
}

//definiciones
void ask_params(){

	cout<<"Digite la base: ";
	cin>>base;

	cout<<"\nDigite el exponente: ";
	cin>>expon;
}

float pot(float b, int e){

	if(e == 1){

		return b;
	}

	else{

		return b * pot(b, e - 1);
	}
}
