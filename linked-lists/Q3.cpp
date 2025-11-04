#include <iostream>

using namespace std;

struct Node {
	Node *prev;
	int data;
	Node *next;
};

void addEnd(Node *&head, int value) {
	Node *added = new Node;
	added -> prev = NULL;
	added -> data = value;
	added -> next = NULL;
	
	Node *aux = head;
	
	while(aux -> next != NULL) {
		aux = aux -> next;
	}
	
	aux -> next = added;
	added -> prev = aux;
	
}

void printForward(Node *head) {
	Node *aux = head;
	
	while(aux != NULL) {
		cout << "elemento: " << aux -> data << endl;
		aux = aux -> next;
	}
}

void printBackward(Node *head) {
	Node *aux = head;
	
	Node *final = NULL;
	
	while(aux -> next != NULL) {
		aux = aux -> next;
	}
	
	final = aux;
	
	while(final != NULL) {
		cout << "elemento: " << final -> data << endl;
		final = final -> prev;
	}
}

int biggerNode(Node *head) {
	Node *aux = head;
	
	int biggerData = -999999999;
	
	while(aux != NULL) {
		if(aux -> data > biggerData) {
			biggerData = aux -> data;
		}	
		aux = aux -> next;
	}
	
	return biggerData;
}

int main() {
	
	Node *head = new Node;
	head -> prev = NULL;
	head -> data = 1;
	head -> next = NULL;
	
	addEnd(head, 2);
	addEnd(head, 3);
	addEnd(head, 4);
	addEnd(head, 5);
	addEnd(head, 6);
	addEnd(head, 7);
	
	cout << biggerNode(head) << endl;
	
	//printForward(head);
	//printBackward(head);
	
	return 0;
}
