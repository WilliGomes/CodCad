#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int vetor[N], tempo=10;

	for(int i = 0; i < N; i++){
		cin >> vetor[i];
	}
	
	for(int i = 0; i < N; i++){
		if(vetor[N - 1 - i] - vetor[N - 2 - i] <= 10){
			tempo = tempo + (vetor[N - 1 - i] - vetor[N-2-i]);
		}
		else {
			tempo = tempo + 10;
		}

		if(N - 2 - i == 0) break;
	}

	cout << tempo << endl;
}
