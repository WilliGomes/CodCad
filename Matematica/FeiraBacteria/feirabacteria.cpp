#include <iostream>
#include <cmath>
using namespace std;

int main(){

	long N, D, C, maior=0, somaN, numero;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> D >> C;
		
		somaN=0;
		//somaN = log((1*(pow(D,C)- 1))/(D-1));
		somaN = C*log(D);
		//cout << somaN << endl;

		maior = max(maior, somaN);

		if(somaN == maior){
			numero = 0;
			numero = i;
		}
	}
	cout << numero << endl;

}
