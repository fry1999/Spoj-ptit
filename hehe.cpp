#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long mp[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 4444, 4447};
	int m=sizeof(mp)/sizeof(mp[0]);
	long long l, r, n;
	cin>>l>>r;
	n= sqrt(r);
	long long next[1000], LKSUM=0;
	
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
