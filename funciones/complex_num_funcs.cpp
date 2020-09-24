//sumando numeros
//complejos usando sructs

//packs
#include<iostream>
using namespace std;


//structs

struct complex{

	float real, img;

}z[2];

//prototipos
void ask_data();
complex sum(complex, complex); //nombre del struct define una func particular
void print(complex);

//main
int main(){
	ask_data();

	//a variable able to how real, img params
	complex x = sum(z[0], z[1]);

	//show resulting sum
	print(x);

	return 0;
}

//definiciones
void ask_data(){
	for(int i = 0; i < 2; i++){
		cout<<i+1<<". Digite la parte real: ";
		cin>>z[i].real;

		cout<<i+1<<". Digite la parte img: ";
		cin>>z[i].img;
	}
}

complex sum(complex z1, complex z2){
	z[0].real += z[1].real;
	z[0].img += z[1].img;

	return z[0];
}

void print(complex x){

	cout<<"Resultado :"<<x.real<<" , "<<x.img<<endl;
}