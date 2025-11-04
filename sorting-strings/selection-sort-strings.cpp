#include <iostream>

using namespace std;

constexpr int STRING_LENGTH = 20;

bool smallerThan(char current[], char min[]) {
	int i = 0;
	while(current[i] != '\0' && min[i] != '\0') {
		if(current[i] != min[i]) {
			return current[i] < min[i];
		}
		i++;
	}
	
	return current[i] == '\0';
}

void copy(char to[], char from[]) {
	int i = 0;
	while(from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	
	to[i] = '\0';
}

void swap(char minIndex[] , char min[]) {
	char aux[STRING_LENGTH];
	copy(aux, min);
	copy(min, minIndex);
	copy(minIndex, aux);
}

void selectionSort(char array[][STRING_LENGTH], int n) {
	for(int i = 0; i < n - 1; i++) {
		int indexOfMin = i;
		
		for(int j = i + 1; j < n; j++) {
			if(smallerThan(array[j], array[indexOfMin])) {
				indexOfMin = j;
			}
		}
		
		swap(array[i], array[indexOfMin]);
	}
}

int main() {
	int n = 4;
	
	char names[n][STRING_LENGTH] = {"Maria", "Bruna", "Alberto", "Joao"};
	
	selectionSort(names, n);
	
	for(int i = 0; i < n; i++) {
		cout << names[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
