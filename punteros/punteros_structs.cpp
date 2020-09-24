/*
*Poner punteros a estructuras
*Un puntero es una variable que almacena una dir de mem
*El operador '->' permite a un puntero senalar hacia un
*'atributo' del struct.
*/


//librerias
#include<iostream>
#include<stdlib.h>
using namespace std;


struct Persona
{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

/*
*la variable *puntero_persona se encarga
*de senalar la posicion de men en donde
*esta la variable persona
*/


/*
*PROTOTIPOS
*/

void pedir_datos();
void mostrar_datos(Persona *);

//Persona *, significa que el arg sera una var
//de tipo Persona atribuida a un puntero


/*
*EL MAIN
*/
int main(){

	pedir_datos();
	mostrar_datos(puntero_persona);
	return 0;
}


/*
*DEFINICIONES
*/
void pedir_datos(){

	//pedir nombre
	cout<<"Digite el nombre de la persona: ";
	cin.getline(puntero_persona -> nombre, 30, '\n');

	//pedir edad
	cout<<"Digite la edad: ";
	cin>>puntero_persona -> edad;
}

void mostrar_datos(Persona *puntero_persona){

	cout<<"El nombre registrado fue: "<<puntero_persona->nombre<<endl;
	cout<<"La edad registrada fue: "<<puntero_persona->edad<<endl;

}
