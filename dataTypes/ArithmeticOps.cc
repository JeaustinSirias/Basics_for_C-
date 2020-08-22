//An exercise to make a program that
//recieves 2 integers and compute add, sub, div, prod


//packages
#include<iostream>

using namespace std;

int main(){

	//variables
	int a, b, sum = 0, sub = 0, mult = 0; 
	float div = 0;

	cout<<"Input a number:\n"; 
	cin>>a;

	cout<<"Input a number one more time:\n";
	cin>>b;

	//define operations
	sum = a + b;
	sub = a - b;
	mult = a*b;
	div = a / b;

	cout<<"La suma es:"<<sum<<endl;
	cout<<"La resta es"<<sub<<endl;
	cout<<"El producto es:"<<mult<<endl;
	cout<<"La division es:"<<div<<endl;


	return 0;


}