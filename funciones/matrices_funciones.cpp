//un ejemplo sobre como pasarle 
//una matriz como parametro a una func

//packs
#include<iostream>
using namespace std;

//prototipos
void show_matrix(int m[][3], int, int);
void sqr_matrix(int m[][3], int, int);




//main
int main(){
	const int rows = 2, cols = 3; 
	int mat[rows][cols] = {{1, 2, 3}, {4, 5, 6}};
	show_matrix(mat, rows, cols);
	sqr_matrix(mat, rows, cols);
	show_matrix(mat, rows, cols);  


	return 0;
}


//defs
void show_matrix(int m[][3], int rows, int cols){

	cout<<"Mostrando la matriz almacenada:"<<endl;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

void sqr_matrix(int m[][3], int rows, int cols){ 

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			m[i][j] *= m[i][j];
		}
	}
}
