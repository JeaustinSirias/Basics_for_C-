//sampling how create 2D arrays in C++


//packages
#include<iostream>
using namespace std;

int main(){

	//rows x cols

	int matrix[100][100], rows, cols;

	cout<<"Input the number of rows:"; cin>>rows;
	cout<<"Input the number of cols:"; cin>>cols;


	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){

			cout<<"Input a number ["<<i<<"]["<<j<<"]";
			cin>>matrix[i][j];

		}

	}

	//displaying matrix

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){

			cout<<matrix[i][j];
		}

		cout<<"\n";
	}



	return 0;
	
}