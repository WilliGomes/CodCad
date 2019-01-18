#include <iostream>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;

	int maior, menor;
	if(m >= n){
		maior = m, menor = n;
	}
	else{
		maior = n, menor = m;
	}

	int vetA[maior], vetB[maior], vetRe[maior];
	
	//preenchendo vetores com 0
	for(int i = 0; i < maior; i++){
		vetA[i] = 0;
		vetB[i] = 0;
	}

	//
	for(int i = 0; i < m; i++){
		int enta;
		cin >> enta;
		vetA[i] = enta;
	}

	for(int i = 0; i < n; i++){
		int entb;
		cin >> entb;
		vetB[i] = entb;
	}

	
	int carry = 0;
	for(int i = 0; i < maior; i++){
		vetRe[i] = (vetA[i] ^ vetB[i]) ^ carry;
		carry =  vetA[i] & vetB[i];
	}
		
	for(int i = 0; i < maior; i++){
		cout << vetRe[i] << " ";
	}
	cout << endl;

}
