//A program that displays how to use switch sentence


//packages
#include<iostream>
using namespace std;

int main(){

	int num1, num2, num3;
	int x;
	cout<<"Input a number between:"; cin>>num1>>num2>>num3;


/*
	switch(num){
		case 1: cout<<"Input num is 1"; break;
		case 2: cout<<"Input num is 2"; break;
		case 3: cout<<"Input num is 3"; break;
		case 4: cout<<"Input num is not 1, 2 or 3."; break;

*/

	if(num1 > num2){

		x = num1;
	}

		else{
			x = num2;
		}

	if(x > num3){

		cout<<"the greatest number is:"<<x;
	}

	else{
		x = num3;
		cout<<"the greatest number is:"<<x;
	}



	return 0;
}