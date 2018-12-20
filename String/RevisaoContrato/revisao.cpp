#include <iostream>
using namespace std;

int main(){

	string N;
	char D;
	D = '1', N = '1';

	while(D != '0' and  N != "0"){
		cin >> D >> N;
		if(D == '0' and N == "0")break;
		string nova = "";
		for(int i = 0; i < N.size(); i++){
			if(N[i] != D){
				nova= nova + N[i];
			}
		}
		int i = 0;
		if(nova == "" ){
			cout << endl  << "0";
		}
		else if(nova[i] == '0'){
			string nova1 = "";
			for(int i = 0; i < nova.size(); i++){
				if(nova[i] != '0'){nova1 += nova[i,]; break;}	
			}
			if(nova1 == ""){
				cout << endl << "0";
			}
			else{
				cout << endl << nova1;
			}
		}
		else{
			cout << endl << nova;
		}
	}
}





