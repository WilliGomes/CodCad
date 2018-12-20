#include <iostream>
using namespace std;

int main(){

	int O1, P1, B1, O2, P2, B2;
	cin >> O1 >> P1 >> B1;
	cin >> O2 >> P2 >> B2;

	if(O1 > O2 ){
		cout << "A" << endl;
	}
	else if(O1 >= O2 and P1 > P2){
		cout << "A" << endl;
	
	}
	else if(O1 >= O2 and P1 >= P2 and B1 > B2){
		cout << "A" << endl;
	
	}
	else{
		cout << "B" << endl;
	}


}
