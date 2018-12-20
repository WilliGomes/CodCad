#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;

	if(A == B and B == C){
		cout << "*" << endl;
	}
	else if(A != B and B == C ){
		cout << "A" << endl;
	}
	else if(B != A and A == C){
		cout << "B" << endl;
	}	
	else if (C != A and A == B){
		cout << "C" << endl;
	}

}

