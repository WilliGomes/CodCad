#include <iostream>
using namespace std;

int main(){

	float L1, A1;
	float L2, A2;

	cin >> L1 >> A1;
	cin >> L2 >> A2;

	if( (L1*A1)>(L2 * A2) ){
		cout << "Primeiro";
	}
	else if((L1*A1)<(L2 * A2)){
		cout << "Segundo";
	} 
	else{
		cout << "Empate";
	}

}