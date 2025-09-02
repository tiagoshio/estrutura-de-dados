#include <iostream>

using namespace std;

int main() {
	
	while(true) {
		cout << "Digite um numero: ";
	
		int x;
		
		cin >> x;
		
		if(x == 0) {
			break;
		}
		
		int divisor = 0;
		
		for(int i = 1; i <= x; i++) {
			if(x % i == 0) {
				divisor++;
			}
		}
		
		if(divisor == 2) {
			cout << x << " eh um numero primo" << endl;
		} else {
			cout << x << " nao eh um numero primo" << endl;
		}	
	}
	
	return 0;
}
