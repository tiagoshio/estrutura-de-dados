#include <iostream>

using namespace std;

int main() {
	
	cout << "Informe seu salario: ";
	
	double wage;
	
	cin >> wage;
	
	double percent;
	double increase;
	double newWage;
	
	if(wage <= 280) {
		percent = 0.2;
		increase = wage * percent;
		newWage = wage + increase;
		
	} else if(wage > 280 && wage <= 700) {
		percent = 0.15;
		increase = wage * percent;
		newWage = wage + increase;
		
	} else if(wage > 700 && wage < 1500) {
		percent = 0.1;
		increase = wage * percent;
		newWage = wage + increase;
		
	} else {
		percent = 0.05;
		increase = wage * percent;
		newWage = wage + increase;
	}
	
	cout << "Salario antes do reajuste: " << wage << " R$" << endl;
	cout << "Percentual de aumento aplicado: " << percent << "%" << endl;
	cout << "Valor do aumento: " << increase << " R$" << endl;
	cout << "Novo salario, apos o aumento: " << newWage << " R$" << endl;
	
	
	return 0;
}
