#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int valor[N];

	for(int i = 0; i < N; i++){
		cin >> valor[i];
	}

	int soma=0, maior=0, aux1 = valor[0];

	for(int i = 0; i < N; i++){
		if(aux1 != valor[i]){
			soma = 0;
		}
		soma++;
		maior = max(maior, soma);
		aux1 = valor[i];
	}
	cout << maior << endl;
}
