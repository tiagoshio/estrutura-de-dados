#include <iostream>

using namespace std;

int main() {
	
	int rows = 4;
	int columns = 3;
	
	int matrix[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
	
	//matriz -> matriz transposta (linha -> coluna e coluna -> linha)
	int transposeMatrix[columns][rows] = {};
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			transposeMatrix[j][i] = matrix[i][j];
		}
	}
	
	//i -> coluna e j -> linha
	for(int i = 0; i < columns; i++) {
		for(int j = 0; j < rows; j++) {
			cout << transposeMatrix[i][j] << " "; 
		}
		cout << endl;
	}
	
	//verificar a simetria entre as matrizes
	bool isSimetric = false; 
	if(rows == columns) {
		
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < columns; j++) {
				if(matrix[i][j] == transposeMatrix[j][i]) {
					isSimetric = true;
				} else {
					return -1;
				}
			}
		}
		
	}
	
	if(isSimetric) {
		cout << "A matriz e simetrica" << endl;
	} else {
		cout << "A matriz nao e simetrica" << endl;
	}
	
	
	
	return 0;
}
