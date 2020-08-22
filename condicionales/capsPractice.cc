//this program ask for a character and identifies if this 
//one is capitalized of not


//packages
#include<iostream>

using namespace std;

int main(){
	char wrd;

	cout<<"Input a character:"; cin>>wrd;

	switch(wrd){

		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Its not a cap"; break;
		default : cout<<"Its cap"; break;
	}



	return 0;
}