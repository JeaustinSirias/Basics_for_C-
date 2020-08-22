//this is a program that asks the user for genre, heigh and age

//packages
#include<iostream>

using namespace std;
int main(){

	int age;
	char genre[10];
	double height;


	//ask for info
	cout<<"Input M for male or F for female:"; cin>>genre;
	cout<<"Input your age:"; cin>>age;
	cout<<"Input your height"; cin>>height;

	//display input

	cout<<"Your genre is:"<<genre<<endl;
	cout<<"Your age is:"<<age<<endl;
	cout<<"Your height is:"<<height<<endl;


	return 0;

}