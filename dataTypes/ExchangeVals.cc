//this program exchanges values between tho subjects


#include<iostream>
#include<math.h>

using namespace std;

int main(){

	int x, y, aux;

	cout<<"Input x value:"; cin>>x;
	cout<<"Input y value:"; cin>>y;

	aux = x;
	x = y;
	y = aux;

	cout<<"\nNew xVal is:"<<x<<", and yVal is:"<<y;




	return 0;
}