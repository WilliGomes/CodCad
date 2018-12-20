#include <iostream>
using namespace std;

int main(){
	int N, P, X, Y, i;

	cin >> N >> P;
	i = 1;
	int cont = 0;

	while(i <= N ){
		cin >> X >> Y;
		
		if( X+Y >= P){
			cont = cont + 1;
			
		}

		i++;
	}

	cout << cont;
}