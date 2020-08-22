//this is a program to show hoy to buid an algorithm
//that shows the greatest element in an array


#include<iostream>
using namespace std;

int main(){

	int array[100]; //def the array elements size
	int n, great = 0, i = 0; //n is the number of elements for array

	cout<<"Input the number of elements to store in your array:";
	cin>>n;

	for(i; i < n; i++){

		cout<<i+1<<". Input a number:";
		cin>>array[i];

		if(array[i] > great){
			great = array[i];
		}
	}

	cout<<"The biggest element in this array is:"<<great;


	return 0;
}