#include <iostream>

using namespace std;

int main () {
	cout << " M(Masculino) e F(Feminino): ";
	
	char letter;
	
	cin >> letter;
	
	if(letter == 'F') {
		cout << "Feminino" << endl;
	} else if(letter == 'M') {
		cout << "Masculino" << endl;
	} else {
		cout << "erro!";
	}
	
	return 0;
}
