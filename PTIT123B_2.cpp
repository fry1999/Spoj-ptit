#include<bits/stdc++.h>
using namespace std;

bool isEqual(long arr[], long n){
	for(long j=1; j<n; ++j){
		if(arr[j]!=arr[j-1]) return false;
	}
	return true;
}
//void output(long arr[], long n){
//	for(long i=0; i<n ; ++i) cout<<arr[i]<<" ";
//	cout<<endl;
//}
void demSoLanLap(long arr[], long n, long t){
	int count=0, d=1000;
	long temp;
	while(d--){
		count++;
		for(long i=0; i<n; ++i){
			if(i==0){
				temp= arr[i];
				arr[i]=abs(arr[i]-arr[i+1]);
			}
			else if(i==n-1) arr[i]=abs(arr[i]-temp);
			else arr[i]=abs(arr[i]-arr[i+1]);
			if(isEqual(arr, n)) {
				cout<<"Case "<<t<<": "<<count<<" iterations\n";
				return ;
			}
		}
		//output(arr, n);
	}
	cout<<"Case "<<t<<": "<<"not attained\n";
	return ;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long n, t=0;
	while(1){
		t++;
		cin>>n;
		if(n==0) return 0;
		long arr[n+1];
		for(long i=0; i<n; ++i) cin>>arr[i];
		if(isEqual(arr, n)) {
			cout<<"Case "<<t<<": "<<0<<" iterations\n";
		}
		else demSoLanLap(arr, n, t);
	}
}
