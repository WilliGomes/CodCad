#include <iostream>
using namespace std;

int main(){

	int N, i;
	int campo[55];

	cin >> N;
	for(i=0; i < N; i++){
		cin >> campo[i]; 
	}

	for(i = 0; i < N; i++){
		int resultado = 0;
		if(i == 0){
			resultado = resultado + campo[i];
			resultado = resultado + campo[i + 1];
		}
		else if(i == (N - 1)){
			resultado = resultado + campo[i];
			resultado = resultado + campo[i - 1];
		}
		else {
		
			resultado = resultado + campo[i];
			resultado = resultado + campo[i - 1];
			resultado = resultado + campo[i + 1];
		}

		cout << resultado << endl;

	}

}
