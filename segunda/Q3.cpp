#include <iostream>

using namespace std;

int main() {
	
	char abc[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	
	int total = 0;
	for(int i = 0; i < 10; i++) {
		if(!(abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u')) {
			total++;
		}
	}
	
	cout << total << endl;
	return 0;
}
