#include <iostream>
using namespace std;

int main(){
	int N, i, area = 0, atual=0, div;
	int vetor[100001];
	
	cin >> N;
	for(i = 0; i < N; i++){
		cin >> vetor[i];
	       	area += vetor[i];
	}

	div = area/2;

	for(i = 0; i < N; i++){
		atual += vetor[i];
		if(atual == div){
			cout << i+1 << endl;
		}
	
	}
}
