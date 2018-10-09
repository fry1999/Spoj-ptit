#include<iostream>
#include<math.h>
using namespace std;
long long n;
long long mp[10000];
void TaoMangMayMan(){
	mp[0]=4;
	mp[1]=7;
	int c=0, d=1, m=1;
	while(m<=n){
		int a = m+1;
		for(int i=c; i<=d; i++){
			mp[++m]=mp[i]*10+4;
			mp[++m]=mp[i]*10+7;
		}
		c=a; d=m;
	}
}
int main(){
	long long l, r;
	cin>>l>>r;
	n= sqrt(r);
	long long next[r+3], LKSUM=0;
	TaoMangMayMan();
	for(int i=l; i<=r; i++){
		for(int j=0; j<=n+1; j++){
			if(i<=mp[j]){
			    next[i]=mp[j];
			    break;
			}
		}
	}
	for(int i=l; i<=r; i++){
		LKSUM+=next[i];
	}
	cout<<LKSUM;
}
