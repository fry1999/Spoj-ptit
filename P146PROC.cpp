#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long a[5], dem=0;
	for(long long i=0; i<4; i++){
		cin>>a[i];
	}
	sort(a, a+4);
	for(long long i=1; i<4; i++){
		if(a[i]==a[i-1]) ++dem;
	}
	cout<<dem;
}
