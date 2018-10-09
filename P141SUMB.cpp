#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n, x, d=0;
	cin>>n;
	int a[n+5];
	memset(a, 0, sizeof(a));
	for(int i=1; i<=n; ++i){
		cin>>x;
		if(x<=n) ++a[x];
	}
	for(int i=1; i<=n; ++i){
		if(a[i]==0) ++d;
	}
	cout<<d;
}
