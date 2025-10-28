#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

void addEnd(Node *&head, int value) {
	Node *added = new Node;
	added -> data = value;
	added -> next = NULL;
	
	Node *aux = head;
	
	while(aux -> next != NULL) {
		aux = aux -> next;
	}
	
	aux -> next = added;
}

void print(Node *head) {
	Node *aux = head;
	
	while(aux != NULL) {
		cout << "elemento: " << aux -> data << endl;
		aux = aux -> next;
	}
}

void toCircular(Node *&head) {
	
	Node *aux = head;
	
	while(aux -> next != NULL) {
		aux = aux -> next;
	}
	
	aux -> next = head;
	cout << aux -> next -> data << endl;
}

int main() {
	
	Node *head = new Node;
	head -> data = 10;
	head -> next = NULL;
	
	addEnd(head, 2);
	addEnd(head, 3);
	addEnd(head, 4);
	addEnd(head, 5);
	
	toCircular(head);
		
	//print(head);
	return 0;
}
