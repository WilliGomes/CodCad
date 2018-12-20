#include <iostream>
using namespace std;

int main(){
	int X;
	cin >> X;
	int i = 1;

	while(i <= X){
		if((X%i) == 0){
			cout << i << " ";
		}
		i++;
	}


}