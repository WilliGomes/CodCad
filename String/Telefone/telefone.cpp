#include <iostream>
using namespace std;

int main(){
	string d, n, novo = "";
	cin >> d >> n;
		

	while(d != "0" and n != "0"){
		for(int i = 0; i < n.size(); i++){
			if(n[i] != d[0]){
				novo = novo + n[i];
			}
		}	

		int verificador = 0;
		for(int i = 0; i < novo.size(); i++){
			if(novo[i] == '0')
				verificador = 1;
	
		}

		if(novo == "" || verificador == 1)
			novo = "0";

		cout << novo << endl;
		
		novo = "";
		cin >> d >> n;
	}

}
