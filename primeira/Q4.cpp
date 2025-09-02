#include <iostream>

using namespace std;

int main() {
	
	int sum;
	int bigNum = -999999999;
	int smallNum = 999999999;
	
	while(true) {
		cout << "Digite um numero: ";
		int a;
		cin >> a;
		
		if(a == 0) {
			break;
		}
		
		if(a > bigNum) {
			bigNum = a;
		}
		
		if(a < smallNum) {
			smallNum = a;
		}
		
		sum += a;		
	}
	
	cout << "soma de todos os valores informados foi igual a: " << sum << endl;
	cout << "o maior numero informado foi: " << bigNum << endl;
	cout << "o menor numero informado foi: " << smallNum << endl;
	
	return 0;
}
