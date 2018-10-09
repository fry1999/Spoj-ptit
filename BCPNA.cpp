#include<iostream>
#include<string.h>
using namespace std;

bool arr[100003];
long soNguyenTo[100003];
long m=0;

void SieveOfEratosthencs(long max){
	memset(arr, true, max+1);
	for(long p=2; p*p<=max; p++){
		if(arr[p]){
			for(long i=2*p; i<=max; i+=p){
				arr[i]=false;
			}
		}
	}
	for(long p=2; p<=max; p++){
		if(arr[p]) soNguyenTo[m++]=p;
	}
}

void demSoCach(long s){
	long dem=0;
	for(long i=0; i<m; i++){
		long sum=soNguyenTo[i];
		if(sum==s){
			dem++;
			continue;
		}
		for(long j=i+1; j<m; j++){
			sum+=soNguyenTo[j];
			if(sum==s) {
				dem++;
				break;
			}
			else if(sum>s) break;
		}
	}
	cout<<dem<<endl;
}
int main(){
	int T;
	long max=0;
	long a[100003];
	
	cin>>T;
	for(int t=0; t<T; t++){
		cin>>a[t];
		if(a[t]>max) max=a[t];
	}
	SieveOfEratosthencs(max);
	for(int t=0; t<T; t++){
		demSoCach(a[t]);
	}
	
}
