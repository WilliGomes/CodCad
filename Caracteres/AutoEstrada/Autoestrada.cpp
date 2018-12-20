#include <iostream>
using namespace std;

int main(){
	int C, soma= 0;
	char Ci;

	cin >> C;
	for (int i = 0; i < C; ++i)
	{
		cin >> Ci;

		if (Ci == 'P' )
		{
			soma = soma +2;
		}
		else if(Ci == 'C'){
			soma = soma+2; 
		}
		else if(Ci == 'A'){
			soma++;
		}
	}

	cout << soma;



}