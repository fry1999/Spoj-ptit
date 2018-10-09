#include<iostream>
using namespace std;

int finalNumber(long n){
	if(n<10) return n;
	int sum=0;
	while(n){
		sum+= n%10;
		n/=10;
	}
	n=sum;
	finalNumber(n);
}
int main(){
	int t;
	cin>>t;
	long n;
	for(int i=0; i<t; i++){
		cin>>n;
		cout<<finalNumber(n)<<endl;
	}
}
