#include <iostream>
using namespace std;

int main(){
	int N, acertos=0;
	string gaba,resp;

	cin >> N;
	cin >> gaba;
	cin >> resp;


	for(int i = 0; i < gaba.size(); i++){
		if(gaba[i] == resp[i])acertos++;
	}

	cout << acertos << endl;


}
