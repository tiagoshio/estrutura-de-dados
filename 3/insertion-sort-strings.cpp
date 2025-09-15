#include <iostream>

using namespace std;

constexpr int STRING_LENGTH = 20;

bool smallerThan(char inserted[], char previous[]) {
	int i = 0;
	
	while(inserted[i] != '\0' && previous[i] != '\0') {
		if(inserted[i] != previous[i]) {
			return inserted[i] < previous[i];
		}	
		i++;
	}
	
	return inserted[i] == '\0';
}

void copy(char to[], char from[]) {
	int i = 0;
	while(from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	
	to[i] = '\0';
}

void swap(char last[], char inserted[]) {
	char aux[STRING_LENGTH];
	copy(aux, inserted);
	copy(inserted, last);
	copy(last, aux);	
}

void insertionSort(char array[][STRING_LENGTH], int n) {
	for(int i = 1; i < n; i++) {
		for(int j = i; j > 0; j--) {
			if(smallerThan(array[j], array[j - 1])) {
				swap(array[j], array[j - 1]);
			}
		}
	}
}

int main() {
	int n = 4;
	
	char names[n][STRING_LENGTH] = {"Maria", "Mariana", "Alberto", "Joao"};
	
	insertionSort(names, 4);
	
	for(int i = 0; i < n; i++) {
		cout << names[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
