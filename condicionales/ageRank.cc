//A program that identifies is an input age is beetween 
//a specified linspace



#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Input your age:"; cin>>age;

	if((age >= 18) && (age < 25)){ //&& equals 'and' in Python3

		cout<<"Your age is in 18-25 range";
	}

	else{
		cout<<"You're older than 25 or younger than 25";
	}

	return 0;
}