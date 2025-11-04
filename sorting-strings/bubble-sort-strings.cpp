#include <iostream>

using namespace std;

constexpr int STRING_LENGTH = 20;

bool greaterThan(char now[], char next[]) {
	int i = 0;
	while(now[i] != '\0' && next[i] != '\0') {
		if(now[i] != next[i]) {
			return now[i] > next[i];
		}
		i++;
	}
	
	return now[i] != '\0';
}

void copy(char to[], char from[]) {
	int i = 0;
	while(from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	
	to[i] = '\0';
}

void swap(char before[], char after[]) {
	char aux[STRING_LENGTH];
	copy(aux, before);
	copy(before, after);
	copy(after, aux);
}

void bubbleSort(char array[][STRING_LENGTH], int n) {
	
	for(int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if(greaterThan(array[j], array[j + 1])) {
				swap(array[j], array[j + 1]);
			}	
		}
	}
}

int main() {
	int n = 4;
	
	char names[n][STRING_LENGTH] = {"Maria", "Mariana", "Alberto", "Joao"};
	
	bubbleSort(names, n);
	
	for(int i = 0; i < n; i++) {
		cout << names[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}
