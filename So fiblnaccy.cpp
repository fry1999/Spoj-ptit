#include<iostream>
#define P 1000000007

long long fibonaccy(long long n){
	if(n==0) return 0;
	if(n==1) return 1;
	return (fibonaccy(n-1)+fibonaccy(n-2))%P;
}
using namespace std;

int main(){
	long long n;
	cin>>n;
	cout<<fibonaccy(n);
}
