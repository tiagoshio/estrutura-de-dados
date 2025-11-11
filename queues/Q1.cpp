#include <iostream>

using namespace std;

struct Content {
	string name;
	Content *next;
};

struct Subject {
	string name;
	int credits;
	Content *headContent;
};

struct NodeSubject {
	Subject subject;
	NodeSubject *next;
};

struct Student {
	string name;
	string cpf;
	int age;
	string registration;
	NodeSubject *headSubject;
};

struct NodeStudent {
	Student student;
	NodeStudent *next;
};

void addStartContent(Subject &subject, string contentName) {
	Content *newContent = new Content;
	newContent -> name = contentName;
	newContent -> next = NULL;
	
	newContent -> next = subject.headContent;
	subject.headContent = newContent;
}

void addEndContent(Subject &subject, string contentName) {
	Content *newContent = new Content;
	newContent -> name = contentName;
	newContent -> next = NULL;
	
	if(subject.headContent != NULL) {
		Content *aux = subject.headContent;
		
		while(aux -> next != NULL) {
			aux = aux -> next;
		}
		
		aux -> next = newContent;
	} else {
		subject.headContent = newContent;
	}
}

void removeStartContent(Subject &subject) {
	Content *aux = subject.headContent;
	
	Content *newHead = subject.headContent -> next;
	
	subject.headContent = newHead;
	
	delete aux;
}

void removeEndContent(Subject &subject) {
	Content *aux = subject.headContent;
	
	while(aux -> next -> next != NULL) {
		aux = aux -> next;
	}
	
	Content *toRemove = aux -> next;
	
	aux -> next = NULL;
	
	delete toRemove;
}

void printContents(Subject subject) {
	Content *aux = subject.headContent;
	cout << "Conteudos: ";
	
	while(aux != NULL) {
		cout << aux -> name;
		aux = aux -> next;
		
		if(aux != NULL) {
			cout << ", ";
		} else {
			cout << ".";
		}
	}
}

void printAllSubjects(Student student) {
	NodeSubject *aux = student.headSubject;
	
	cout << "Cadeiras: ";
	while(aux != NULL) {
		cout << endl;
		cout << aux -> subject.name << "(" << aux -> subject.credits << " creditos" << "):" << endl;
		cout << "{";
		printContents(aux -> subject);
		cout << "}" << endl;
		aux = aux -> next;
	}
}

Subject& addEndSubject(Student &student, string subjectName, int credits) {
	Subject newSubject;
	newSubject.name = subjectName;
	newSubject.credits = credits;
	newSubject.headContent = NULL;
	
	NodeSubject *newNodeSubject = new NodeSubject;
	newNodeSubject -> subject = newSubject;
	newNodeSubject -> next = NULL;
	
	if(student.headSubject != NULL) {
		NodeSubject *aux = student.headSubject;
		
		while(aux -> next != NULL) {
			aux = aux -> next;
		}
		
		aux -> next = newNodeSubject;	
	} else {
		student.headSubject = newNodeSubject;
	}
	
	return newNodeSubject -> subject;
}

void removeEndSubject(Student &student) {
	NodeSubject *aux = student.headSubject;
	
	while(aux -> next -> next != NULL) {
		aux = aux -> next;
	}
	
	NodeSubject *toRemove = aux -> next;
	
	aux -> next = NULL;
	
	delete toRemove;
}

void enqueue(NodeStudent *&head, NodeStudent *&rear, Student student) {
	NodeStudent *newNodeStudent = new NodeStudent;
	newNodeStudent -> student = student;
	newNodeStudent -> next = NULL;
	
	if(head == NULL) {
		head = newNodeStudent;
		rear = newNodeStudent;
	} else {
		rear -> next = newNodeStudent;
		rear = newNodeStudent;
	}
}

void dequeue(NodeStudent *&head, NodeStudent *&rear, Student student) {
	NodeStudent *aux = head;
	
	if(head == rear) {
		head = NULL;
		rear = NULL;
		
		delete aux;
	} else {
		head = head -> next;
		delete aux;
	}
}

printQueue(NodeStudent *head) {
	NodeStudent *aux = head;
	
	while(aux != NULL) {
		cout << aux -> student.name << " | idade: " << aux -> student.age << " | cpf: " << aux -> student.cpf << " | matricula: " << aux -> student.registration << endl;
		printAllSubjects(aux -> student);
		aux = aux -> next;
		cout << "_____________________________________" << endl;
	}
}

int main() {
	Student eu;
	eu.name = "Tiago Elias";
	eu.age = 20;
	eu.registration = "20232015";
	eu.cpf = "000.000.000-00";
	eu.headSubject = NULL;
	
	Subject &estrutura = addEndSubject(eu, "Estrutura de dados", 4);
	addEndContent(estrutura, "Structs");
	addEndContent(estrutura, "Ponteiros");
	addEndContent(estrutura, "Linked Lists");
	addEndContent(estrutura, "Pilha");
	addEndContent(estrutura, "Fila");
	
	Subject &calculo = addEndSubject(eu, "Calculo 2", 4);
	addEndContent(calculo, "metodo da substituicao");
	addEndContent(calculo, "integral por partes");
	addEndContent(calculo, "teorema fundamental do calculo");
	addEndContent(calculo, "calculo de area por integral");
	
	//----------------------------//
	
	Student emilton;
	emilton.name = "Emilton";
	emilton.age = 22;
	emilton.registration = "20232013";
	emilton.cpf = "000.000.000-01";
	emilton.headSubject = NULL;
	
	Subject &estrutura1 = addEndSubject(emilton, "Estrutura de dados", 4);
	addEndContent(estrutura1, "Structs");
	addEndContent(estrutura1, "Ponteiros");
	addEndContent(estrutura1, "Linked Lists");
	addEndContent(estrutura1, "Pilha");
	addEndContent(estrutura1, "Fila");
	
	//----------------------------//
	
	Student winicius;
	winicius.name = "Winicius";
	winicius.age = 24;
	winicius.registration = "20232017";
	winicius.cpf = "000.000.000-02";
	winicius.headSubject = NULL;
	
	Subject &calculo2 = addEndSubject(winicius, "Calculo 2", 4);
	addEndContent(calculo2, "metodo da substituicao");
	addEndContent(calculo2, "integral por partes");
	addEndContent(calculo2, "teorema fundamental do calculo");
	addEndContent(calculo2, "calculo de area por integral");
	
	NodeStudent *head = NULL;
	NodeStudent *rear = NULL;
	
	enqueue(head, rear, eu);
	enqueue(head, rear, emilton);
	enqueue(head, rear, winicius);
	
	printQueue(head);
	
	return 0;
}
