#include <iostream>
using namespace std;

int main(){

	int n, cont = 0;
	cin >> n;

	
	pair <int, int> consu[n];
	 	
	for(int i = 0; i < n; i++){
		cin >> consu[i].first >> consu[i].second;
	}


	int livre = 0;
	for(int i = 0; i < n; i++){
		if(livre <= consu[i].first){
			cont++;
			livre = consu[i].second;
		}
	}
	
	cout << cont << endl;

	return 0;
}
