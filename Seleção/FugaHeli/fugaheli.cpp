#include <iostream>
using namespace std;

int main(){

	int H, P, F, D;

	cin >> H >> P >> F >> D;

	if(D == -1)
	{
		if (H>P and P>F and H>F)
		{
			cout <<  "S";
		}
		else if(F > H and P > H and P> F)
		{
			cout << "S";
		}
		else if(F > P and H > P and F > H)
		{
			cout << "S";
		}
		else 
		{
			cout << "N";
		}

	}
	else if (D == 1)
	{
		if(H > F and F > P and H>P){
			cout << "S";
		}
		else if(P > H and H > F and P > F){
			cout << "S";
		}
		else if(F > P and P>H and F > H){
			cout << "S";
		}
		else{
			cout << "N";
		}
	}


}

	
