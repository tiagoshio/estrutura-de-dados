#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

void push(Node *&top, int value) {
	Node *newTop = new Node;
	newTop -> data = value;
	newTop -> next = top;
	
	top = newTop;
}

void printStack(Node *top) {
	Node *aux = top;
	
	while(aux != NULL) {
		cout << "elemento: " << aux -> data << endl;
		aux = aux -> next;
	}
}

void removeMid(Node *&top) {
	int n = -1;
	
	Node *aux = top;
	
	while(aux != NULL) {
		n++;
		aux = aux -> next;
	}
	
	int mid = n / 2;
	
	int count = 0;
	
	aux = top;
	
	while(count != mid - 1) {
		aux = aux -> next;
		count++;
	}
	
	Node *middleNode = aux -> next;
	
	aux -> next = middleNode -> next;
	
	delete middleNode;
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
	
	printStack(top);
	
	removeMid(top);
	
	cout << endl;
	printStack(top);
	
	return 0;
}
