#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long b[n], a[101]={};
	for(long long i=1; i<=n; i++){
		cin>>b[i];
	}
	for(long long i=1; i<=n; i++){
		a[i]=b[i]*i;
		for(long long j=1; j<i; j++){
			a[i]-=a[j];
		}
	}
	for(long long i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
}
