#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

void push(Node *&top, int value) {
	Node *newNode = new Node;
	newNode -> data = value;
	newNode -> next = top;
	
	top = newNode;
}

void printStack(Node *top) {
	Node *aux = top;
	
	while(aux != NULL) {
		cout << "elemento: " << aux -> data << endl;
		aux = aux -> next;
	}
}

int pop(Node *&top) {
	Node *aux = top;
	
	int value = top -> data;
	
	top = top -> next;
	
	delete aux;
	
	return value;
}

void invertStack(Node *&top, Node *&newStack) {
	if(top != NULL) {
		int value = pop(top);
		
		push(newStack, value);
		
		invertStack(top, newStack);
	}
}

int main() {
	
	Node *top = new Node;
	top -> data = 10;
	top -> next = NULL;
	
	push(top, 20);
	push(top, 30);
	push(top, 40);
	push(top, 50);
	push(top, 60);
	
	//printStack(top);
	//pop(top);
	printStack(top);
	
	cout << endl;
	
	Node *invertedStack = new Node;
	invertedStack -> data = pop(top);
	invertedStack -> next = NULL;
	
	invertStack(top, invertedStack);
	
	printStack(invertedStack);

	return 0;
}
