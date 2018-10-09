#include<iostream>
#include<algorithm>
using namespace std;

long long score(long a[], long b[], long long n){
	long long p=0, d=0;
	for(long long i=0; i<n; ++i){
		for(long long j=p; j<n; ++j){
			if(b[j]> a[i]){
				d++; p=j+1;
				break;
			}
		}
	}
	return d;
}
int main(){
	long long n;
	cin>>n;
	long a[n+1], b[n+1];
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	for(long long i=0; i<n; ++i){
		cin>>b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	cout<<score(a, b, n);
}
