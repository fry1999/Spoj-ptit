#include<iostream>

using namespace std;
long long pow(long long m, long long n, long long mod){
	if(n==0) return 1 % mod;
	long long d= pow(m, n/2, mod);
	d= (d*d)%mod;
	if(n % 2== 1) return (d*m)% mod;
	return d;
	
}
int main(){
	long long m, n, k;
	cin>>m>>n>>k;
	long long const mod=k;
	cout<<pow(m, n, mod);
}
