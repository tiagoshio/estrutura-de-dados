#include <iostream>

using namespace std;

int main() {
	int sumPares = 0;
	int sumImpares = 0;
	
	while(true) {
		cout << "Digite um numero: ";
		
		int x;
		
		cin >> x;
		
		if(x > 1000 || x < 0) {
			cout << sumPares << " soma dos numeros pares informados" << endl;
			cout << sumImpares << " soma dos numeros impares informados" << endl;
			break;
		}
		
		if(x % 2 == 0) {
			sumPares += x;
		} else {
			sumImpares += x;
		}
	}
	
	return 0;
}
