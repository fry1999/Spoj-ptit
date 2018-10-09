#include<iostream>
using namespace std;
int main(){
	long n, d=0;
	cin>>n;
	int temp=0, a;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a!=temp){
			d++;
			temp=a;
		}
	}
	cout<<d;
}
