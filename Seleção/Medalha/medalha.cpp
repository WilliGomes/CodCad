#include <iostream>
using namespace std;

int main(){

	int T1, T2, T3;

	cin >> T1;
	cin >> T2;
	cin >> T3;

	if(T1 < T2 and T2 < T3){
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
	}
	else if(T1 < T3 and T3 < T2){
		cout << "1" << endl;
		cout << "3" << endl;
		cout << "2" << endl;
	}
	else if(T2 < T1 and T1 < T3){
		cout << "2" << endl;
		cout << "1" << endl;
		cout << "3" << endl;
	}
	else if(T3 < T1 and T1 < T2 ){
		cout << "3" << endl;
		cout << "1" << endl; 
		cout << "2" << endl; 
	}
	else if(T2 < T3 and T3 < T1){
		cout << "2" << endl; 
		cout << "3" << endl; 
		cout << "1" << endl;  
	}
	else if (T3 < T2 and T2 < T1) {
		cout << "3" << endl;
		cout << "2" << endl;
		cout << "1" << endl;
	}

}
