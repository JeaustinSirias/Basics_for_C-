//como lograr que una funcion retorne mas de una salida


#include<iostream>
#include<vector>
using namespace std;


//prototipos
 void cambio(int cantidad, int vec[], int);

//main
int main(){

	//int a = 100, b = 50, c = 20, d = 10, e = 5, f = 1;
	int billetes[] = {100, 50, 10, 5, 1};
	const int size = 5;
	cambio(560, billetes, size);
	return 0;  
}

void cambio(int cantidad, int billetes[], int size){

	int cambio = 0;
	for(int i = 0; i < size; i++){

		while(cantidad >= billetes[i]){
			cantidad -= billetes[i];
			cambio++;
		}
	}

	
	/*while(cantidad >= cien){
		cantidad -= cien;
		cambio++;
	}

	while(cantidad >= cincuenta){

		cantidad -= cincuenta;
		cambio++;
	}

	while(cantidad >= veinte){

		cantidad -= veinte;
		cambio++;
	}

	while(cantidad >= diez){

		cantidad -= diez;
		cambio++;
	}

	while(cantidad >= cinco){

		cantidad -= cinco;
		cambio++;
	}

	while(cantidad >= uno){

		cantidad -= uno;
		cambio++;
	}*/

	cout<<"El minimo numero de billetes equivalentes es: "<<cambio<<endl;
}