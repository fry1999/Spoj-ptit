#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int N, t=0, st[10000], a[10000];

int greatCommonDivisor(int a, int b){
	if(!b) return a;
	return greatCommonDivisor(b, a%b);
	
}
int main(){
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>a[i];
	}
	int m=fabs(a[1]-a[0]);
	for(int i=2; i<N; i++){
		m= greatCommonDivisor(m, fabs(a[i]-a[i-1]));
	}
	for(int i=1; i<=sqrt(m); i++){
		if(m%i==0){
			st[t++]=i;
			if(i*i!=m ) st[t++]=m/i;
		}
	}
	sort(st, st+t);
	for(int i=1; i<t; i++) cout<<st[i]<<" ";
}
