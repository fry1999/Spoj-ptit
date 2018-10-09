#include<iostream>
using namespace std;
int main(){
	long long n, m;
	cin>>n>>m;
	long long a[n+5];
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	long long sum=0, max=0;
	for(long long i=0; i<n-2; i++){
		for(long long j=i+1; j<n-1; j++){
			for(long long k=j+1; k<n; k++){
				sum=a[i]+a[j]+a[k];
				if(sum<=m&& sum>max) max=sum;
			}
		}	
	}
	cout<<max;
	
}
