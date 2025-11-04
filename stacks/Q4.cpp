#include <iostream>

using namespace std;

static int INDEX_TOP = 0;
int SIZE = 4;

bool isFull(int stack[]) {
	int count = 0;
	
	for(int i = 0; i < SIZE; i++) {
		if(stack[i] != 0) {
			count++;
		}
	}
	
	if(count == SIZE) {
		return true;
	}
	
	return false;
}
	
void push(int value, int stack[]) {
	
	if(isFull(stack)) {
		cout << "Pilha cheia, nao eh possivel inserir mais elementos!" << endl;
		return;
	}
	
	for(int i = SIZE - 1; i > 0; i--) {
		stack[i] = stack[i - 1];
	}
	
	stack[INDEX_TOP] = value;
}

void pop(int stack[]) {
	stack[INDEX_TOP] = 0;
}

int peek(int stack[]) {
	return stack[INDEX_TOP];	
}

printStack(int stack[]) {
	for(int i = 0; i < SIZE; i++) {
		if(stack[i] != 0) {
			cout << "elemento: " << stack[i] << endl;
		}
	}
}

int main() {
	int stack[SIZE] = {};
	
	push(1, stack);
	push(2, stack);
	push(3, stack);
	push(4, stack);

	printStack(stack);
	
	pop(stack);
	
	cout << endl;
	
	printStack(stack);
	
	return 0;
}
