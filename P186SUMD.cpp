#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	long n, m, x;
	cin>>n>>m;
	long arr[m+2];
	memset(arr, 0, sizeof(arr));
	for(int i=0; i<n; ++i){
		cin>>x;
		++arr[x];
	}
	sort(arr, arr+m+1);
	long d=arr[m];
	for(long i=m-1; i>=0; --i){
		d=d-arr[i];
		if(d<0) d*=-1;
	}
	cout<<n-d;
	
}
