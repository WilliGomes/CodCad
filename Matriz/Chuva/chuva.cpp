#include <iostream>
using namespace std;

int main(){
	int A[105][105], B[105][105], C[105][105];
	int N;
	cin >> N;

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> A[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> B[i][j];
		}
	}

	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			C[i][j]= A[i][j] + B[i][j];
		}
	}
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cout << C[i][j] << " ";

		}

		cout << endl;
	}	

}
