#include<iostream>
#include<string.h>
using namespace std;

// I use an algorithm a bit like Sieve of Eratosthens to solve this problem.

void likeABitSieveOfERatisthens(int check[], long l, long r){
	for(long i=1; i<=r; i++){
		for(long j=i; j<=r; j+=i){
			check[j]+=i;
		}
	}
	long d=0;
	for(long k=l; k<=r; k++){
		if(check[k]-k > k) d++;
	}
	cout<<d;
}
int main(){
	long l, r;
	cin>>l>>r;
	if(l>r){
		l=l+r;
		r= l-r;
		l= l-r;
	}
	int check[r+1];
	memset(check, 0, sizeof(check));
	likeABitSieveOfERatisthens(check,l, r);
}
