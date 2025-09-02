#include <iostream>

using namespace std;

int main() {
	
	int rows = 3;
	int columns = 3;
	
	int squareMatrix[rows][columns] = {};
	
	//matriz identidade
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {			
			squareMatrix[i][j] = 0;
			
			if(i == j) {
				squareMatrix[i][j] = 1;
			}
		}
	}
	
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << squareMatrix[i][j] << " ";
		}
		
		cout << endl;
	}
	
	return 0;
}
