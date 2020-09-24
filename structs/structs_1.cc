//how to use structs
//fflush(stdin); is a func to empty the buffer when it gets full

#include<iostream>
#include<string.h>
using namespace std;


struct persona{

	char nombre[20];
	int age;
} persona1 = {"jimmy", 22}, persona2 = {"joarg", 30};

//para guardar cadenas de caracteres usar
//cin.getline(varName, chainSize, '\n')


int main(){
	char name[20] = "Jeaustin";
	cout<<"nombre1 :"<<persona1.nombre<<endl;
	cout<<"edad1 :"<<persona1.age<<endl;
	cout<<"nombre: "<<name<<endl;

	strcpy(name, "jajajajaj");
	cout<<"nombre: "<<name<<endl;


	return 0;
}