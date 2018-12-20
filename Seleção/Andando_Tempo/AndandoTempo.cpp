#include <iostream>
using namespace std;

int main(){
	int A, B, C;
	cin >> A >> B >> C;

	if(A == B or A == C or B == C or A + B == C or A + C == B or B + C == A){
		cout << "S" << endl;
	
	}
	else{
		cout << "N" << endl;
	}	
	
}
