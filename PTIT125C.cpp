#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	long long n, k, a, b;
	cin>>n>>k;
	long arr[n+1];
	memset(arr, 0, sizeof(arr));
	while(k--){
		cin>>a>>b;
		for(long long i=a-1; i<=b-1; ++i){
			++arr[i];
		}
	}
	sort(arr, arr+n);
	cout<<arr[n/2];
}
