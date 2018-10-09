#include<iostream>
#include<string.h>
using namespace std;

int t;

void nguyenTo(long long arr[], long long max){
	bool kt[max+1];
	memset(kt, true, sizeof(kt));
	for(long i=2; i<max; ++i){
		if(kt[i]){
			for(long p=i*2; p<=max; p+=i)
			kt[p]=false;
		}
	}
	for(int i=0 ; i<t; ++i){
		long long d=0;
		if(kt[arr[i]]){
			for(long j=2; j<=arr[i]; ++j){
		    	if(kt[j]) ++d;
	        }
	        if(d<2) cout<<"0"<<endl;
	        else if(kt[d]) cout<<"1"<<endl;
	        else cout<<"0"<<endl;
		}
		else cout<<"0"<<endl;
	}
}
int main(){
	cin>>t;
	long long max=0;
	long long arr[t+1];
	for(int i=0; i<t; ++i){
		cin>>arr[i];
		if(arr[i]> max) max= arr[i];
	}
	nguyenTo(arr, max);
}
