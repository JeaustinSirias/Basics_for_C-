//un programa que calcula y muestra la suma de los cuadrados 
//de los primeros 10 enteros mayores a 0


#include<iostream>
using namespace std;

int main(){

	int array[10];
	int sum = 0;
	int i;

	for(i = 1; i <= 10 ; i++){

		sum = sum + (i*i);
	}

	cout<<"The result is:"<<sum<<endl;

	return 0;

}