#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n, d1=0, d2=0;
	cin>>n;
	int a[2*n+2];
	for(long long i=1; i<=2*n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=2*n; i+=2){
		if(a[i] != 0) d1++;
		if(a[i] !=1 ) d2++;
	}
	cout<<min(d1, d2);
}
