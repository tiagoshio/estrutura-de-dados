#include <iostream>

using namespace std;

void sequentialSearch(int array[], int n, int a) {
	int aux = 0;
	int indexes[n] = {};
	
	for(int i = 0; i < n; i++) {
		if(array[i] == a) {
			indexes[aux] = i;
			aux++;
		}
	}
	
	if(aux == 0) {
		cout << "Elemento não foi encontrado" << endl;
	} else {
		for(int i = 0; i < n; i++) {
			cout << indexes[i] << ", ";
		}
		
		cout << endl;
	}
	
}

int main() {
	
	int array[10] = {6, 6, 3, 4, 5, 6, 7, 8, 9, 10};
	
	sequentialSearch(array, 10, 6);
	
	return 0;
}
