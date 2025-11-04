#include <iostream>

using namespace std;

struct Node {
	char data;
	Node *next;
};

void push(Node *&top, char value) {
	Node *newNode = new Node;
	newNode -> data = value;
	newNode -> next = top;
	
	top = newNode;
}

char pop(Node *&top) {
	Node *aux = top;
	
	char letter = top -> data;
	
	top = top -> next;
	
	delete aux;
	
	return letter;
}

void printStack(Node *top) {
	Node *aux = top;
	
	while(aux != NULL) {
		cout << "elemento: " << aux -> data << endl;
		aux = aux -> next;
	}
}

int main() {
	string text = "tiago";
	
	int n = text.size();
	
	Node *top = new Node;
	top -> data = text[0];
	top -> next = NULL;
	
	for(int i = 1; i < n; i++) {
		push(top, text[i]);
	}
	
	//printStack(top);
	string invertedText = "";
	
	for(int i = 0; i < n; i++) {
		char letter = pop(top);
		invertedText += letter;
	}
	text = invertedText;
	cout << text << endl;
	
	return 0;
	
}
