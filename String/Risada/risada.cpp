#include <iostream>
using namespace std;

int main(){
	string risada, risada_nova = "";
	cin >> risada;

	if(risada.size() > 50)
		return 0;

	for(int i = 0; i < risada.size(); i++){
		if(risada[i] == 'a' || risada[i] == 'e'|| risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
			risada_nova = risada_nova + risada[i];
		}
	
	}
	
	if(risada_nova.size() == 1){
		cout << 'S' << endl;
		return 0;
	
	}
	int verifica, n;
	if(risada_nova.size()%2 == 0)
		n = risada_nova.size()/2;
	else
		n = (risada_nova.size()-1)/2;


	for(int i = 0; i < n; i++){
		if(risada_nova[i] == risada_nova[risada_nova.size()-1 -i])
			verifica = 1;
		else{
			verifica = 0;
			cout << 'N' << endl;
			return 0;
		}
	}

	if(verifica == 1)
		cout << 'S' << endl;
}
