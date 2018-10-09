#include<iostream>
#include<math.h>
using namespace std;
int soCap(long n){
	int d=0;
	for(long i=2; i<=sqrt(2*n); i++){
		if((2*n)%i==0){
			if(i%2==0){
				if((2*n/i) % 2!=0) d++;
			}
			else if((2*n)/i % 2==0) d++;
		}
	}
	return d;
}

int main(){
	int T, tt;
	long n;
	cin>>T;
	for(int t=1 ; t<=T; t++){
		cin>>tt>>n;
		cout<<tt<<" "<<soCap(n)<<endl;
	}
}
