#include <iostream>
#include  <windows.h>
#include <stdio.h>
using namespace std;

/*Ler 2 matrizes A e B de 5 linhas e 3 colunas, construir uma matriz C, onde cada elemento de C seja a soma dos
elementos correspondente em A com B.*/

int A[5][3];
int B[5][3];
int C[5][3];

int imprimeA(){
	cout << "escrevendo valores aleatorios\n";
	cout << "MATRIZ A";
	for(int i=0;i<=4;i++){
		cout << "\n";
		for(int j=0;j<=2;j++){
			cout << " " << B[i][j];
			Sleep(200);
			

		}
	}
	cout << "\n\n";

}

int imprimeB(){
	cout << "escrevendo valores aleatorios\n";
	cout << "MATRIZ B";
	for(int i=0;i<=4;i++){
		cout << "\n";
		for(int j=0;j<=2;j++){
			cout << " " << A[i][j];
			Sleep(200);
			

		}
	}
	cout << "\n\n";

}

int imprimeC(){
	cout << "A soma correspondente aos elementos de A e B \n";
	cout << "MATRIZ C";
	for(int i=0;i<=4;i++){
		cout << "\n";
		for(int j=0;j<=2;j++){
			cout << " " << C[i][j];
			Sleep(200);
			

		}
	}

}

int main(){
	for(int i=0;i<5;i++){
		
		for(int j=0;j<3;j++){
			
			A[i][j] = rand()%9;
			
		}
		
	}

	for(int i=0;i<5;i++){
		
		for(int j=0;j<3;j++){
			
			B[i][j] = rand()%5 + 1;
			
		}
		
	}

	for(int i=0;i<5;i++){
		
		for(int j=0;j<3;j++){
			
			C[i][j] = A[i][j] + B[i][j];

			
		}
		
	}

	imprimeA();
	imprimeB();
	imprimeC();
	return 0;

}
