#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int n, b, valores;
	cin >> n >> b;
	int cond = 1; 
	while(cond != 0){
		int bolas[b];
	
		//Preenchendo vetor de bolas disponíveis
		for(int i = 0; i < b; i++){
			cin >> valores;
			bolas[i] = valores;
		}	
	
		//Vetor com valores de 0 à N com valor 0
		int range_n[n+1];
		for(int i = 0; i < n+1; i++)
			range_n[i] = 0;
	

		//Conferindo valores de bolas no intervalo de 0 a N
		for(int i = 0; i < b; i++){
			if(bolas[i] <= n)
				range_n[bolas[i]] = 1;
	
		}

		//Verificando se as combinações dão o valor menor igual que N
		for(int i = 0; i < b-1; i++)
			for(int j = i + 1; j < b; j++){
				if(abs(bolas[i] - bolas[j]) <= n)
					range_n[abs(bolas[i] - bolas[j])] = 1;
			}

		// verificando se há algum 0 no loop
		int verificador = 1;
		for(int i = 0; i < n+1; i++){
			if(range_n[i] == 0){
				verificador = 0;
			}
		}
	
		if(verificador == 1)
			cout << 'Y' << endl;
		else
			cout << 'N' << endl;

		cin >> n >> b;
		cond = 1;
		if(n == 0 and b == 0)
			cond = 0;
	}

}

