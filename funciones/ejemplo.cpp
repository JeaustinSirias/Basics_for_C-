#include<iostream>
using namespace std;


template <class obj>
void sum(obj num1);


int main(){

	float a = 7.46;
	int b = -4;

	sum(b);
	return 0;
}


template <class obj>
void sum(obj num1){

	if(num1 < 0){num1 *= -1;}
	cout<<"el abs es: "<<num1<<endl;
}