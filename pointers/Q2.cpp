#include <iostream>

using namespace std;

int main() {
	
	int num2 = 11;
	int *ptrNum2 = &num2;
	cout << "Valor do ponteiro num2: " << ptrNum2 << endl;
	
	int num1 = 10;
	int *ptrNum1 = &num1;
	cout << "Valor do ponteiro num1: " << ptrNum1 << endl;
	
	
	if(ptrNum1 > ptrNum2) {
		cout << "Maior endereco: " << ptrNum1;
		return -1;
	}
	
	cout << "Maior endereco: " << ptrNum2;
	
	return 0;
}
