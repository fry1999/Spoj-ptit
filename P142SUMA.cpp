#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n;
	cin>>n;
	for(long k=1; k*(k+1)/2 <= n/2; ++k){
		long long t= k*(k+1)/2;
		long long z= (n-t)*2;
		long long temp = sqrt(z);
		if(temp *(temp + 1)== z){
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
}
