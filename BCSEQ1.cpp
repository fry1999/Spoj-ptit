#include<iostream>
using namespace std;

long minOfSum(long arr[], long m){
	for(long i=1; i<m; ++i){
		if(arr[m] % arr[i]==0){
			int d=2;
			for(long j=i+1; j<m; ++j){
	    		if(arr[j]> arr[i]*d) break;
	    		if(arr[j] == arr[i]*d){
		    		++d;
		    		if(arr[i] * d== arr[m]) return arr[i];
		    	}
				 
	    	}
    	}
    }
	return arr[m];
}
int main(){
	int t;
	long tt, m, x;
	cin>>t;
	while(t--){
		cin>>tt>>m;
		long arr[m+2];
		arr[0]=0;
    	for(long i=1; i<=m; ++i){
	    	cin>>x;
	    	arr[i]=arr[i-1]+x;
    	}
    	cout<<tt<<" "<<minOfSum(arr, m);
	}
}
