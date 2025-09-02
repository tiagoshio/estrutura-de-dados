#include <iostream>

using namespace std;

int main() {
	
	cout << "Digite um numero: ";
	
	int x;
	
	cin >> x;
	
	for(int i = 1; i < 11; i++) {
		cout << x << " x " << i << " = " << x*i << endl;
	}	
	
	return 0;
}
