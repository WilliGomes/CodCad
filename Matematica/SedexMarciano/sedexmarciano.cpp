#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int L, A, P, R;
	double Cmax;
	cin >> L >> A >> P >> R;
	
	Cmax = 2*sqrt(pow(R,2)-pow((A/2),2));
	cout << Cmax << endl;

	if(L > Cmax or A > 2*R or P > Cmax ){
	       	cout << "N" << endl;
	}
	else {
		cout << "S" << endl;	
	}


}
