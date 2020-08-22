//A program that show how to store 2 sub arrays in one



//packages
#include<iostream>




int main(){

	char array1[] = {'a', 'b', 'c', 'd'};
	int array2[] = {1, 2, 3, 4};
	char cell[8];

	//fusing array1 and array2 in cell

	for(int i = 0; i < 4; i++){

		cell[i] = array1[i];
	}

	for(int i = 4; i < 8; i++){

		cell[i] = array2[i - 4];
	}

	for(int i = 0; i < 8; i++){

		std::cout<<cell[i]<<std::endl;
	}


	return 0;

}