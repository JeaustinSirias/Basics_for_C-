//a program to show how to use while loops

#include<iostream>
#include<vector>
//using namespace std;

int main()
{
	std::vector<int> myVector;
	int myInt = 20;
	//int i; i = 1, k = 1;



	while (myInt >1){
		myInt--;
		myVector.push_back(myInt);
		std::cout<<myInt<<std::endl;
	}

	//std::cout<<int(myVector);

	return 0;
}