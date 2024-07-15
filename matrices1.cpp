#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Ingrese el tamaño de la matriz cuadrada: ";cin>>n;
	int A[n][n];
	cout<<"Ingrese los valores de la matriz cuadrada: ";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; i++){
			cin>>A[i][j];
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			sum += matriz[i][j];
		}
	}
	cout<<"La suma de los elementos de la diagonal principal hacia arriba es de: ";cin<<sum<<endl;
	return 0;
