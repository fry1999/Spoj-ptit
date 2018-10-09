#include<iostream>
using namespace std;
int main(){
	int a[9], d1=1, d2=1;
	for(int i=0; i<8; i++){
		cin>>a[i];
	}
	for(int i=1; i<8; i++){
		if(a[i]>=a[i-1]) d1++;
		else if(a[i]<=a[i-1]) d2++;
	}
	if(d1==8) cout<<"ascending";
	else if(d2==8) cout<<"descending";
	else cout<<"mixed";
}
