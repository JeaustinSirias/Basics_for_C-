//a sample how to implement the bubble sort algorithm


//packages
#include<iostream>
using namespace std;


//if current num is greater than the next one, then change

int main(){

	//define an array
	int numbers[] = {32, 1, 54, 32, 6};
	int i, j, aux; //loop variables


	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(numbers[j] > numbers[j + 1]){

				aux = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = aux;

			}
		}
	}

	for(i = 0; i < 5; i++){

		cout<<numbers[i]<<endl;
	}






	return 0;
}