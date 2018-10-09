#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

void soGanNguyenTo(long long arr[],long long max, long long n, bool kt[], bool kt2[]){
	memset(kt, true, sizeof(kt));
	memset(kt2, false, sizeof(kt2));
	for(long long p=2; p*p <= max; p++){
		if(kt[p]){
			for(long long k=p*2; k*k<=max; k+=p){
			    kt[k]=false;
	    	}
		}
	}
	for(long long i=2; i*i <= max; i++){
		if(kt[i]){
			kt2[i*i]=true;
		}
	}
	for(long long i=0; i<n; ++i){
		if(kt2[arr[i]]==true) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
int main(){
	long long n, x=0, max=0;
	cin>>n;
	long long arr[n+1];
	for(long long i=0; i<n; ++i){
		cin>>arr[i];
		if(arr[i]> max) max=arr[i];
	}
	bool kt[(long)sqrt(max)+1];
	bool kt2[max+5];
	soGanNguyenTo(arr, max, n, kt, kt2);
	
	
}
