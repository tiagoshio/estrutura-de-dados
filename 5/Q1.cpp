#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int *ptrInt = &x;
	
	cout << "Valor da variavel: " << x << endl;
	cout << "Endereco de memoria da variavel: " << &x << endl;
	cout << "Valor do ponteiro: " << ptrInt << endl;
	cout << "Valor que o ponteiro aponta: " << *ptrInt << endl;
	
	*ptrInt = x * 2;
	
	cout << "Novo valor que o ponteiro aponta: " << *ptrInt << endl;
	
	cout << "--------------------------" << endl;
	
	float y = 3.50f;
	float *ptrFloat = &y;
	
	cout << "Valor da variavel: " << y << endl;
	cout << "Endereco de memoria da variavel: " << &y << endl;
	cout << "Valor do ponteiro: " << ptrFloat << endl;
	cout << "Valor que o ponteiro aponta: " << *ptrFloat << endl;
	
	*ptrFloat = 7.5f;
	
	cout << "Novo valor que o ponteiro aponta: " << *ptrFloat << endl;
	
	cout << "--------------------------" << endl;
	
	char z = 't';
	char *ptrChar = &z;
	
	cout << "Valor da variavel: " << z << endl;
	cout << "Endereco de memoria da variavel: " << &z << endl;
	cout << "Valor do ponteiro: " << ptrChar << endl;
	cout << "Valor que o ponteiro aponta: " << *ptrChar << endl;
	
	*ptrChar = 'i';
	
	cout << "Novo valor que o ponteiro aponta: " << *ptrChar << endl;
	
	return 0;
}
