/*hacer un arreglo de estructura llamada atleta
para N atletas que contenga los siguientes campos:
nombre, pais, numero de medallas y devuelva los datos
del atleta que halla ganado mas medallas*/


//paquetes
/*#include<iostream>
using namespace std;


struct atleta{

	char nombre[30];
	char pais[20];
	int medallas;

}atletas[4];

int main(){

	for(int i = 0; i < 4; i++){

		fflush(stdin);
		//nombre
		cout<<"Digite el nombre del atleta: ";
		cin.getline(atletas[i].nombre, 30, '\n');

		//pais
		cout<<"Digite el nombre del pais de origen: ";
		cin.getline(atletas[i].pais, 20, '\n');

		//medallas
		cout<<"Digite el numero de medallas ganadas: ";
		cin>>atletas[i].medallas;
	

	}


	
	return 0;
}*/


#include<iostream>

using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int n_medallas;
}atletas[100];

int main(){
	int n_atletas,mayor = 0,posM=0;
	
	cout<<"Digite el numero de atletas: ";
	cin>>n_atletas;
	
	//Pedimos los datos para N atletas
	for(int i=0;i<n_atletas;i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(atletas[i].nombre,20,'\n');
		cout<<"Pais: "; cin.getline(atletas[i].pais,20,'\n');
		cout<<"Numero de Medallas: "; cin>>atletas[i].n_medallas;

		//Sacando el atleta con mayor numero de medallas
		if(atletas[i].n_medallas > mayor){
			mayor = atletas[i].n_medallas;
			posM = i;
		}
		cout<<"\n";
	}
	
	cout<<"\nAtleta con mas medallas ganadas: \n";
	cout<<"Nombre: "<<atletas[posM].nombre<<endl;
	cout<<"Pais: "<<atletas[posM].pais<<endl;
	
	return 0;
}
