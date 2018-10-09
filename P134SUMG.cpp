#include<bits/stdc++.h>
using namespace std;

int chua[11], cay[11], min1=INT_MAX, n, a[11];

void init(){
	long n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>chua[i]>>cay[i];
	}
}
void test(){
	long vchua=1, vcay=0;
	long t=0;
	for(int p=0; p<n; p++){
		if(a[p]){
			t=1;
			vchua*=chua[p];
			vcay+=cay[p];
		}
	}
	if(t){
		long d= vchua-vcay;
		if(d<0) d*=-1;
		if(d < min1) min1=d;
	}
}
void find(int i){
	for(int j=0; j<=1 ; j++){
		a[i]=j;
		if(i==n-1) test();
		else find(i+1);
	}
}
int main(){
	init();
	find(0);
	cout<<min1;
}
