#include <iostream>
using namespace std;

int main(){
	double soma=0, v1[5];
	
	for(int i = 0; i <5; i++){
		cin >> v1[i];
		soma += v1[i];
	}

	double maior = v1[0];
	double menor = v1[0];

	for(int i = 0; i < 5; ++i){
		if(maior < v1[i]){
			maior = v1[i];
		}
		if(menor > v1[i]){
			menor = v1[i];
		}
	}
	
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << maior << "   " << menor << endl;
	cout << soma - maior - menor << endl;
}
