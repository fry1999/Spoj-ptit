#include<iostream>
using namespace std;

int riceBag(int n){
	int d=-1;
	if(n%5==0) return d=n/5;
	for(int i=1; 3*i<=n; ++i){
		if((n-(i*3))% 5==0){
			return i+(n-(i*3))/5;
		}
	}
	return d;
}
int main(){
	int n;
	cin>>n;
	cout<<riceBag(n);
}
