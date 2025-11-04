#include <iostream>

using namespace std;

int main() {
	cout << "Digite um numero: ";
	
	double numUm;
	
	cin >> numUm;
	
	cout << "Digite outro numero: ";
	
	double numDois;
	
	cin >> numDois;
	
	if(numUm > numDois) {
		cout << numUm << " eh maior que " << numDois;
	} else if(numUm < numDois) {
		cout << numDois << " eh maior que " << numUm;
	} else {
		cout << numUm << " eh igual a " << numDois;
	}
	
	return 0;
}
