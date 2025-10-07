#include <iostream>

using namespace std;

struct DateBirth {
	int day;
	int month;
	int year;
};

struct Employee {
	string name;
	int age;
	char gender;
	string cpf;
	DateBirth dateBirth;
	int departmentCode;
	string role;
	double salary;
};

int main() {
	
	Employee employee;
	DateBirth dateBirth;
		
	cout << "Digite o nome do funcionario: ";
	cin >> employee.name;
	
	cout << "Digite idade do funcionario: ";
	cin >> employee.age;
	
	cout << "Digite o sexo do funcionario (M - masculino, F - feminino): ";
	cin >> employee.gender;
	
	cout << "Digite seu CPF: ";
	cin >> employee.cpf;
	
	cout << "Digite sua data de nascimento:" << endl;
	
	cout << "Dia(1->31): ";
	cin >> dateBirth.day;
	
	cout <<"Mes(1->12): ";
	cin >> dateBirth.month;
	
	cout << "Ano: ";
	cin >> dateBirth.year;
	
	employee.dateBirth = dateBirth;
	
	cout << "Digite o codigo do departamento: ";
	cin >> employee.departmentCode;
	
	cout << "Digite o cargo que ocupa: ";
	cin >> employee.role;
	
	cout << "Digite o salario: ";
	cin >> employee.salary;
	
	cout << endl;
	
	cout << "--------------------" << employee.name << "--------------------" << endl;
	cout << "Idade: " << employee.age << " anos" << endl;
	cout << "Genero: " << employee.gender << endl;
	cout << "CPF: " << employee.cpf << endl;
	cout << "Data de nascimento: " << employee.dateBirth.day << "|" << employee.dateBirth.month << "|" << employee.dateBirth.year << endl;
	cout << "Codigo do departamento: " << employee.departmentCode << endl;
	cout << "Cargo: " << employee.role << endl;
	cout << "Salario: " << employee.salary << endl;
	
	return 0;
}
