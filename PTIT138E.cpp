#include<iostream>
using namespace std;

long long round(long long x, long long m){
	if(x<10) return x;
	if(x > m){
	    if(x % m >= m/2){
		    x= x - x%m + m;
	    	round(x, m*10);
	    }
	    else x= x- x%m;
	    round(x, m*10);
	}
	else return x;
}
int main(){
	long long x;
	int n;
	cin>>n;
	while(n--){
		cin>>x;
		cout<<round(x, 10)<<endl;
	}
}
