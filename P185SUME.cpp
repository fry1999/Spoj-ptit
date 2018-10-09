#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	
	long long n, minimum, maximum;
	cin>>n;
	long long a[n+1];
	for(long long i=0; i<n; ++i){
		cin>>a[i];
		if(i==0){
			minimum= a[i];
			maximum= a[i];
		}
		minimum= min(minimum, a[i]);
		maximum= max(maximum, a[i]);
	}
	if(maximum-minimum<=2) cout<<"YES";
	else cout<<"NO";
}
