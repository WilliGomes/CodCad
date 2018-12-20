/* #include <iostream>
using namespace std;

int main(){
	int H1, M1, H2, M2, minutos;
	H1 = 1; M1 =1; H2=1, M2=1;


	while(H1 != 0 or M1 != 0 or H2 != 0 or M2 != 0){

		cin >> H1 >> M1 >> H2 >> M2;
		if(H1 != 0 or M1 != 0 or H2 != 0 or M2 != 0){ 
		minutos = 60*(H2 - H1) + (M2 - M1);
		cout << minutos << endl;
		}

	}

} */

#include <iostream>
using namespace std;
int main(){
    int h,m,ha,ma,t1,t2,f;
    
    while(cin>>h>>m>>ha>>ma){
         if(h==0 and m==0 and ha==0 and ma==0){
            break;
        }
        t1=(h)*60+m;
        t2=(ha)*60+ma;
        if(t2-t1<0){
            cout<<1440+(t2-t1);

        }
        else{
            cout<<t2-t1;
        }

    }


}
