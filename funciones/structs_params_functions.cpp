//un ejemplo sobre como pasarle 
//un struct como parametro a una func

//packs
#include<iostream>
using namespace std;

//structs (es global)
struct persona{

	char name[30];
	int age;
} p1;

//prototipos
void ask_data();
void show_data(persona); //el nombre del struct


//main
int main(){
	ask_data();
	show_data(p1);

	return 0;
}


//definiciones
void ask_data(){

	cout<<"Ingrese el nombre y la edad: ";
	cin.getline(p1.name, 30, '\n');
	cin>>p1.age;
}

void show_data(persona p){
	cout<<"El nombre es: "<<p.name<<endl;
	cout<<"La edad es: "<<p.age<<endl;
}
