//implementing selection sort algorithm O(n2)


//algorithm
//Look for the least element in the list
//change positions between 1st index and the least one
//look for the 2nd least one
//change position between 2nd index and 2nd least element
//and so...


#include<iostream>
using namespace std;

int main(){

	int numbers[] = {32, 54, 4, 1, 87};
	int i, j, aux, min;

	for(i = 0; i < 5; i++){

		min = i;
		for(j = i + 1; j < 5; j++){

			if(numbers[j] < numbers[min]){

				min = j;
			}
		}
		aux = numbers[min];
		numbers[min] = numbers[i];
		numbers[i] = aux;
	}

	for(i = 0; i < 5; i++){

		cout<<numbers[i]<<endl;
	}



	return 0;
}