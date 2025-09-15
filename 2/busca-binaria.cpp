#include <iostream>

using namespace std;

void binarySearch(int array[], int n, int target) {
	int start = 0;
	int end = n - 1;
	
	int indexes[n] = {};
	int aux = -1;
	
	while(start <= end) {
		int mid = (start + end) / 2;
		
		if(target > array[mid]) {
			start = mid + 1;
		} else if(target < array[mid]) {
			end = mid - 1;
		} else {
			aux++;
			indexes[aux] = mid;
			
			int i = mid + 1;
			
			while(i <= end && array[i] == target) {
				aux++;
				indexes[aux] = i;
				i++;
			}
			
			i = mid - 1;
			
			while(i >= start && array[i] == target) {
				aux++;
				indexes[aux] = i;
				i--;
			}
			
			break;	
		}		
	}
	
	if(aux == -1) {
		cout << "Nenhum elemento encontrado! " << endl;
	} else {
		for(int i = 0; i <= aux; i++) {
			cout << indexes[i] << ", ";
		}
		cout << endl;
	}
}

int main() {
	
	int array[14] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 8, 8, 8, 9, 10};
	
	binarySearch(array, 14, 8);
	
	return 0;
}
