/*
*EJERCICIO: Hacer un struct alumno que contenga
*Nombre, Edad y Promedio. Pedir al usuario los
*datos de 3 alumnos y comprobar cual de ellos 
*tiene el mejor promedio. Imprimir los resultados.
*Usar punteros a estructura
*/



/*
*PAQUETES
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

/*
*ESTRUCTURAS
*/
struct Alumno
{
	char nombre[30];
	int edad;
	float promedio;
} alumnos[3], *alumnos_puntero = alumnos;

/*
*PROTOTIPOS
*/
void pedir_datos();
void mejor_nota(Alumno *);


/*
*EL MAIN
*/
int main(){

	pedir_datos();
	return 0;
}

/*
*DEFINICIONES
*/

void pedir_datos(){
	int ch;
	for(int i = 0; i < 3; i++){

		//nombre
		cout<<"Digite el nombre del estudiante "<<i+1<<" : ";
		cin.getline(alumnos_puntero->nombre, 30, '\n');

		//edad
		cout<<"Digite la edad del esudiante "<<i+1<<" : ";
		cin>>alumnos_puntero->edad;

		//promedio
		cout<<"Digite el promedio el estudiante "<<i+1<<" : ";
		cin>>alumnos_puntero->promedio;
	}
	
	while ((ch = fgetc(stdin)) != EOF)
	{
  		if( ch == '\n' ) break;
	}
	
	alumnos_puntero++;
}

void mejor_nota(Alumno *pointer){


}

