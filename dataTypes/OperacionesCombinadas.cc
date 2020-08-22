//this is a program that recieves 2 integers a, b and 
//computes a/b + 1


//packages 
#include<iostream>

using namespace std;

int main(){

	float a, b;
	float output = 0;

	cout<<"Input a value:"; cin>>a;
	cout<<"Input an extra value:"; cin>>b;

	output = (a/b) + 1;

	cout.precision(3); //to set the precision
	cout<<"The result of computing a/b + 1 is:"<<output<<endl;



	return 0;
}