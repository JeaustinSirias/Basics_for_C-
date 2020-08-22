//make a program that recieves a price of an artice
//and apply it a 13% IVA


//Packages
#include<iostream>

using namespace std;
int main(){

	int inputNum;
	double output;

	cout<<"Input the price of the article:";
	cin>>inputNum;

	output = inputNum + inputNum*0.13;

	cout<<"Total to pay is:"<<output<<endl;

	return 0;
}