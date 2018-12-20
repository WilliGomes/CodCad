#include <iostream>
using namespace std;

int main(){
	int N, L, C;
	cin >> N;
	int soma=0;

	for(int i = 0; i < N; i++){
		cin >> L >> C;
		if(L > C) soma += C;
	}

	cout << soma << endl;

}
