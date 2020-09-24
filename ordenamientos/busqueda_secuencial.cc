//busqueda secuencial


#include<iostream>
#include<vector>
using namespace std;


int main(){

	vector<int> numbers = {4, 2, 6, 2, 9};
	int i, size = numbers.size();
	char band = 'F';


	for(i = 0; i < size; i++){

		if(numbers[i] == 10){

			cout<<"el numero "<<numbers[i]<<" esta en la posicion "<<i<<endl;
			band = 'T';
		}

	}

	if(band == 'F'){

		cout<<"requested element was not found"<<endl;
	}



	return 0;
}