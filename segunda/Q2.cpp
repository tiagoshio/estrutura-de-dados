#include <iostream>

using namespace std;

int main() {
	int vetor[5] = {10, 50, 30, 20, 40};
	
	int sum = 0;
	int sub = 0;
	double div = 1;
	
	for(int i = 0; i < 5; i++) {
		sum += vetor[i];
		sub -= vetor[i];
		div /= vetor[i];
	}
	
	cout << sum << endl;
	cout << sub << endl;
	cout << div << endl;
	
	return 0;
}
