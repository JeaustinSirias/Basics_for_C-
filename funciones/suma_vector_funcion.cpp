//un ejemplo de una funcion
//que pide un vector y calcula su suma

//librerias
#include<iostream>
using namespace std;


//prototipos
void ask_data();
int sum_arr(int arr[], int);


//global vars porque se van a usar en +2 funciones
int vec[100], size;


//main
int main(){
	ask_data();
	cout<<"La suma resultante es: "<<sum_arr(vec, size)<<endl;

	return 0;
}


//definiciones
void ask_data(){
	cout<<"Digite la cantidad de elementos del vector:"<<endl;
	cin>>size;

	for(int i = 0; i < size; i++){

		cin>>vec[i];
	}
}

int sum_arr(int arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += arr[i];
	}

	return sum;
}
