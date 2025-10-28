#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

void addEnd(Node *head, int value) {
	Node *added = new Node;
	added -> data = value;
	added -> next = NULL;
	
	Node *aux = head;
	
	while(aux -> next != NULL) {
		aux = aux -> next;
	}
	
	aux -> next = added;
}

int countNode(Node *head) {
	Node *aux = head;
	int i = 0;
	
	while(aux != NULL) {
		cout << "elemento:" << aux -> data << endl;
		aux = aux -> next;
		i++;
	}
	
	//cout << "n: " << i << endl;
	return i;
}

int printMid(Node *head) {
	int n = countNode(head);
	
	int mid = n / 2;
	
	int i = 0;
	
	Node *aux = head;
	
	while(i != mid - 1) {
		aux = aux -> next;
		i++;
	}
	
	return aux -> data;
}

int main() {
	
	Node *head = new Node;
	head -> data = 1;
	head -> next = NULL;
	
	addEnd(head, 2);
	addEnd(head, 3);
	addEnd(head, 4);
	addEnd(head, 5);
	addEnd(head, 6);
	
	cout << "Valor do Meio: " << printMid(head) << endl;
	
	return 0;
}
