#include <iostream>

using namespace std;

int main() {
	
	cout << "Digite um numero: ";
	
	int x;
	
	cin >> x;
	
	int prev = 1;
	int next = 1;
	
	for(int i = 0; i < x; i++) {
		if(i < 2) {
			if(i + 1 == x) {
				cout << 1 << endl;
				break;
			}
			cout << 1 << ", ";
			continue;
		}
		
		int seq = prev + next;
		
		if(i + 1 == x) {
			cout << seq <<  endl;
			break;
		}
		
		cout << seq << ", ";
		prev = next;
		next = seq;
	}
	
	return 0;
}
