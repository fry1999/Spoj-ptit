#include<iostream>
using namespace std;

int reject(int n, int a, int b){
	int t;
	long d=0;
	int arr[]={0, a , 2*b};
	for(int i=0; i<n; ++i){
		cin>>t;
		if(t==1){
			if(arr[1]>=1){
				--arr[1];
			}
			else{
				if(arr[2]>=1) {
					--arr[2];
				}
				else ++d;
			}
		}
		else{
			if(arr[2]>=2){
				 arr[2]-=2;
			}
			else d+=2;
		}
	}
	return d;
}
int main(){
	int n, a, b;
	cin>>n>>a>>b;
	cout<<reject(n,a, b);
}
