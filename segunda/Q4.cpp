#include <iostream>

using namespace std;

int main() {
	
	cout << "Informe o numero de linhas da matriz: ";
	
	int rows;
	cin >> rows;
	
	cout << "Informe o numero de colunas: ";
	int columns;
	cin >> columns;
	
	int matrix[rows][columns] = {};
	
	int sumRows[rows] = {};
	int sumColumns[columns] = {};
	
	int sum = 0;
	
	//para preencher as matrizes e somas seus elementos
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << "Digite um numero inteiro positivo: ";
		
			cin >> matrix[i][j];
		
			if(matrix[i][j] < 0) {
				return -1;
			}
			
			sum += matrix[i][j]; 
		}
	}
	
	//para somar as linhas
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			sumRows[i] += matrix[i][j];
		}
	}
	
	//para somar as colunas
	for(int j = 0; j < columns; j++) {
		for(int i = 0; i < rows; i++) {
			sumColumns[j] += matrix[i][j];
		}
	}
	
	//para imprimir a matriz	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		
		cout << endl;
	}
	
	cout << endl;
	
	//para imprimir o vetor com os valores das linhas da matriz somados
	cout << "Soma das linhas: ";
	for(int i = 0; i < rows; i++) {
		cout << sumRows[i] << " ";
	}
	
	cout << endl;
	
	//para imprimir o vetor com os valores das colunas da matriz somados
	cout << "Soma das colunas: ";
	for(int j = 0; j < columns; j++) {
		cout << sumColumns[j] << " ";
	}
	
	cout << endl;
	cout << "Soma de todos os elementos: " << sum;
	
	return 0;
}
