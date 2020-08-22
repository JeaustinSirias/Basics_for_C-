
#include<iostream>

#include<stdlib.h>
#include<time.h>
using namespace std;

int main () { int x = 0, y = 0, matriz_a[x+2][y+2], matriz_b[x+2][y+2];

cout<<"Digite el numero de filas "; cin>>x; cout<<"Digite el numero de columnas "; cin>>y; cout<<"\n";

srand(time(NULL));
for(int i = 0; i < x; i++) { for(int j = 0; j < y; j++) { matriz_a[i][j] = 1 + rand()%20; } }
for(int i = 0; i < x; i++) { for(int j = 0; j < y; j++) { matriz_b[i][j] = matriz_a[i][j]; } }
for(int i = 0; i < x; i++) { for(int j = 0; j < y; j++) { cout<<matriz_b[i][j]<<", "; } cout<<"\n"; }

return 0; }