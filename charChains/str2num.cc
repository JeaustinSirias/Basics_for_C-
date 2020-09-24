//how to transform a str chain to integers


#include<iostream>
#include<stdlib.h> //atoi() and atof()


using namespace std;

int main(){

	char chain[] = "123";
	char flt_chain[] = "12.343";
	int num;
	float flt;

	//from char to int
	num =  atoi(chain);
	cout<<num<<endl;

	//if you use floats then:
	flt = atof(flt_chain);
	cout<<flt_chain<<endl;







	return 0;
}