//a program about how to use strcpy() func.


//packages
#include<iostream>
#include<string.h>


int main(){

	char name[] = "justin";
	char add[] = " sirias chacon";
	char reverse[] = "hola buen dia";
	char str[20];

	strcpy(str, name);


	//also we can use strcmp() func to compare if both chains equal

	if(strcmp(name, str) != 0){

		std::cout<<"Both chains arent equal"<<std::endl;
	}

	//to cat chains we use strcat()
	strcat(name, add);

	//to revert a chain  we use strrev()
	//strrev(reverse);

	//to capitalize a word use strupr
	//reverse =strupr(reverse);
	std::cout<<reverse<<std::endl;
	std::cout<<name<<std::endl;
	std::cout<<str<<std::endl;

	return 0;
}