#include<iostream>
using namespace std;
long hangDoi(long arr[], long n, long t){
	long sum=0, i=0;
	for(i=0; i<n; ++i){
		if((sum+=arr[i]) > t) break;
	}
	return i;
}
int main(){
	int n, t, T;
	cin>>T;
	while(T--){
		cin>>n>>t;
		long arr[n+1];
		for(long i=0; i<n; ++i){
			cin>>arr[i];
		}
		cout<<hangDoi(arr, n, t)<<endl;
	}
}
