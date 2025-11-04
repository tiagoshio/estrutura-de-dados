#include <iostream>

using namespace std;

int main() {
	
	cout << "Digite um numero: ";
	
	double num;
	
	cin >> num;
	
	if(num > 0) {
		cout << num << " eh um numero positivo" << endl;
	} else {
		cout << num << " eh um numero negativo" << endl;
	}
	
	return 0;
}
