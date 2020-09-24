//implementing insertion sort algorithm O(n2)

//45 32 14 3 9: is there something to the left of 45?
//no. Then move to the next index [1] = 32
//is the number to the left of 32 greater than it?
//yes. So interchange both elements
//32 45 14 3 9: is there something to the left of 32?
//no. So go to the next index after 32's old position.
//is 14 less than 45? Yes. So exchange them 
//32 14 45 3 9. Is 14 less than 32? Yes, exchange them
//14 32 45 3 9. Is there something to the 14's left?
//no. So go to the next index after old 14's position
//and so...


#include<iostream>
using namespace std;

int main(){

	int numbers[] = {45, 32, 14, 3, 9};
	int i, pos, aux;

	for(i = 0; i < 5; i++){

		//current index and number
		pos = i; // i = 1
		aux = numbers[i]; // = 32	//45 32 14 3 9 ----> 45 45 14 3 9 --->  32 45 14 3 9

		//for the i-th index while i > 0 and 
		//number to the left side is greater than the 
		//current one, then change positions
		while(pos > 0 && numbers[pos - 1] > aux){

			numbers[pos] = numbers[pos - 1];
			pos--;
		}

		numbers[pos] = aux;
	}

	for(i = 0; i < 5; i++){

		cout<<numbers[i]<<endl;
	}

	return 0;
}
