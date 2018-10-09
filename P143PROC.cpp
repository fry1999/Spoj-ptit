#include<iostream>
using namespace std;
int main(){
	long long vt1, vt2;
	long long y, k, n;
	cin>>y>>k>>n;
	vt1= y/k+1;
	vt2=n/k;
	if(vt1> vt2){
		cout<<"-1";
		return 0;
	}
	for(long long i=vt1; i<=vt2; ++i){
		cout<<k*i-y<<" ";
	}
}
