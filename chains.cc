 //learling how to use character chains



//packages
#include<iostream>
#include<string.h> //standar lib for char chains
using namespace std;

int main(){

	//def char chains
	char word[] = "justin";

	//cin cant be used to save character chains
	//use gets(var); instead. Uses more mem 
	//cin.getline(varName, #elements, '\n')--->best way to save char chains
	//strlen(var) returns the number of characters in a chain ''
	cout<<word<<endl;


	return 0;
}