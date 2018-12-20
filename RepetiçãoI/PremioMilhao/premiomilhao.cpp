#include <iostream>
using namespace std;

int main(){
	int N, A, soma=0;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> A;
		soma += A;
		if(soma >= 1000000){
			cout << i+1 << endl;
			break;
		}
	}



}
