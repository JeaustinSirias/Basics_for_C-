//a program that identifies if an integer is pair or not


#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Input a number:"; cin>>num;

	if (num == 0){
		cout<<"Input is zero";
	}
	else if(num%2 == 0){
		cout<<"Input is pair";
	}

	else{
		cout<<"Input is not pair";
	}

	return 0;
}