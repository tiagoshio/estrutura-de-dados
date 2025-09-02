#include <iostream>

using namespace std;

int main() {
	cout << "Pressione um numero de 0 a 5: ";
	
	int a;
	cin >> a;
	
	cout << "Pressione outro numero de 0 a 5: ";
	
	int b;
	cin >> b;
	
	if(a > 5 || b > 5) {
		cout << "Pressione um numero valido!";
		return 0; // posso fazer isso Yuri? se funciona? funciona! como eu cheguei a essa conclusão?
		//eu rodei, digitei 10 e 0 e vi que ele printava essa msg e a msg que tava dentro do case ai eu pensei 
		//int main() {} e a declaração de uma função e return 0 e a saida ent se eu colocar um outro return 0 ele vai sair da funcao
		// e n vai executar o resto do codigo
	}
	
	int sum = a + b;
	
	switch(sum) {
		case 0:
			cout << "Tocando Meio-dia..." << endl;
			break;
		case 1:
			cout << "Tocando Rock no Sertão..." << endl;
			break;
		case 2:
			cout << "Tocando Saga de um vaqueiro..." << endl;
			break;
		case 3:
			cout << "Tocando Bota pegando parea..." << endl;
			break;
		case 4:
			cout << "Tocando Ponto final..." << endl;
			break;
		case 5:
			cout << "Tocando Luz, camera, acao..." << endl;
			break;
		case 6:
			cout << "Tocando Toma conta de mim..." << endl;
			break;
		case 7:
			cout << "Tocando Olha pro ceu..." << endl;
			break;
		case 8:
			cout << "Tocando Olhinhos de fogueira..." << endl;
			break;
		case 9:
			cout << "Tocando Rancheira..." << endl;
			break;
		case 10:
			cout << "Tocando avoante...." << endl;
			break;
		default:
			cout << "Digite numeros validos!" << endl;
			break;
	}
	
	return 0;
}
