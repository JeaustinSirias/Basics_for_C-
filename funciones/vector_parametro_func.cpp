//se ejemplifica como pasar parametros de tipo vector

#include<iostream>
using namespace std;

//prototipos
void square(int vec[], int); //elevar al cuadrado cada elemento
void show_res(int vec[], int); //imprimir los resultados



//main
int main(){
	const int size = 5;
	int vect[size] = {1, 2, 3, 4, 5};
	square(vect, size);
	show_res(vect, size);

	return 0;
}


//definiciones

void square(int vec[], int size){

	for(int i = 0; i < size; i++){
		vec[i] *= vec[i];
	}
}

void show_res(int vec[], int size){
	for(int i = 0; i < size; i++){
		cout<<vec[i]<<endl;
	}
}