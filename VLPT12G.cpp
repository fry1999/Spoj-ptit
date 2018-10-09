#include<iostream>
#include<cmath>
#include<string.h>

using namespace std;


long sortBall(long long a, long long b, bool arr[]){
	int dem=0;
	for(long long i=sqrt(a)+1; i*i< b; ++i){
		if(arr[i*i-1]) ++dem;
	}
	return dem;
}
int main(){
	long long a[1001], b[1001], max=0;
	int d=0;
	while(1){
		cin>>a[d]>>b[d];
		if(a[d]==0&& b[d]==0) break;
		if(b[d]> max) max=b[d];
		d++;
	}
	bool arr[max+1];
	memset(arr, false, sizeof(arr));
	long t=2;
	for(long long i=3; i<=max; i+=t){
		arr[i]=true;
		t++;
	}
	for(int i=0; i<d; ++i){
		cout<<"Case "<<i+1<<": "<<sortBall(a[i], b[i], arr)<<endl;
	}
}
