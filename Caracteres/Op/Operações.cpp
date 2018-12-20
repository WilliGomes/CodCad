#include <iostream>
using namespace std;

int main(){
	char letra;
	double num1, num2, res;
	cin >> letra;
	cin >> num1 >> num2;

	if(letra == 'M'){
		res = num1*num2;
	}
	else if(letra == 'D'){
		res = num1/num2;
	}

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << res << endl;

}