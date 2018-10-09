#include<iostream>
#include<stdlib.h>
using namespace std;

int kiemTraDayBangNhau(long a[], int n){
	for(long j=1; j<n; j++){
		if(a[j]!=a[j-1]) return 0;
	}
	return 1;
}
int main(){
	int n, t=0;
	while(1){
		++t;
		
    	cin>>n;
    	long a[n+1];
    	if(n==0) return 0;
    	long dem=0;
    	for(int i=0; i<n; i++) cin>>a[i];
    	if(kiemTraDayBangNhau(a, n)){
    		cout<<"Case "<<t<<": "<<dem<<" iterations"<<endl;
    		continue;
		}
    	while(1){
    		dem++;
    		if(dem>=1000){
		    	cout<<"Case "<<t<<":"<<" not attained"<<endl;
		    	break;
		
			}
    		long temp=a[0];
    		for(int i=0; i<n; i++){
    			if(i==n-1){
    				a[i]=abs(a[i]-temp);
				}
				else a[i]=abs(a[i+1]-a[i]);
	    	}
	    	if(kiemTraDayBangNhau(a, n)){
	    		cout<<"Case "<<t<<": "<<dem<<" iterations"<<endl;
	    		break;
			}

		}
	}
}
