#include <iostream>
using namespace std;

int main(){
	int N, P, Q;
	char C;

	cin >> N;
	cin >> P >> C >> Q ;

	if(C == '+'){
		if(P + Q > N){
			cout << "OVERFLOW";
		}
		else{
			cout << "OK";
		}
	}
	else if(C == '*'){
		if(P * Q > N){
			cout << "OVERFLOW";
		}
		else{
			cout << "OK";
		}
	}

}