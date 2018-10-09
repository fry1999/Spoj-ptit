#include<iostream>
using namespace std;

void anSocola(long a[], long long n){
	long temp=n-1;
	long t1=0, t2=0, d1=0, d2=0;
	for(long i=0; i<n; ++i){
		if(a[i]==0 ) break;
		if(t1 <= t2) {
			t1+=a[i];
			++d1;
			a[i]=0;
		}
		else {
			t2+=a[temp];
			++d2;
			a[temp]=0;
			i--;
			temp--;
		}
	}
	cout<<d1<<" "<<d2;
}
int main(){
	long long n;
	cin>>n;
	long a[n+1];
	for(long i=0; i<n; ++i){
		cin>>a[i];
	}
	anSocola(a, n);	
	
}
