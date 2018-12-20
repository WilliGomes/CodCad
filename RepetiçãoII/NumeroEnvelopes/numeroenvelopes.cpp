#include <iostream>
using namespace std;

int main(){
	int N, menor=10000000;
	cin >> N;

	for(int i =0; i < N; i++){
		int tipos;
		cin >> tipos;
		menor = min(menor, tipos);
	
	}

	cout << menor << endl;



}
