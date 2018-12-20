#include <iostream>
using namespace std;

int main(){
	int i = 1;
	int maior = 0;

	while(i != 0){
		int numero;
		cin >> numero;
		maior = max(maior, numero);

		i = numero;
	}

		cout << maior << endl;

}
