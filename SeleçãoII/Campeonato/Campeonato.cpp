#include <iostream>
using namespace std;

int main(){

	// Ponto > Saldo de Gols 
	// Vitorias - Empates - saldo de gols
	int cv, ce, cs, fv, fe, fs, pontc, pontf;
	cin >> cv >> ce >> cs >> fv >> fe >> fs;
	
	pontc = cv*3 + ce;
	pontf = fv*3 + fe;

	if(pontc > pontf){
		cout << "C" << endl;
	}
	else if(pontc == pontf and cs > fs ){
	
		cout << "C" << endl;
	}
	else if(pontc == pontf and cs == fs){
		cout << "=" << endl;
	}
	else{
		cout << "F" << endl;
	}	
}
