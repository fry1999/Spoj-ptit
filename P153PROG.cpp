#include<iostream>
#include<vector>
using namespace std;
long long giaTri (long long n, long long k){
	if(n%2 !=0) n+=1;
	if(k<= n/2){
		return k*2-1;
	}
	else{
		k=k-n/2;
		return k*2;
	}
}
int main(){
	long long n, k;
	cin>>n>>k;
	cout<< giaTri(n, k);
}
