#include <iostream>
using namespace std;

int main(){
	int N, S;
	cin >> N >> S;
	int menor = S;

	for(int i = 0; i < N; i++){
		int valor;
		cin >> valor;

		S += valor;
		menor = min(menor, S);
	
	}

	cout << menor << endl;

}
