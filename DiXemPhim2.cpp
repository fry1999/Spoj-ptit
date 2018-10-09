#include<iostream>
#include<algorithm>
#define N 16
long long sum=0, c, n;
using namespace std;

int findMaxMass(long long w[], long long n){
	long long temp=0;
	for(int i=n-1; i>=0; i--){
		temp=sum-w[i];
		if(temp==c){
			cout<<temp; return 0;
		}else if(temp<c){
			for(int j=0; j<=i; j++){
				temp=sum-w[j];
				if(temp<c){
					cout<<temp; return 0;
				}
			}
		}
		else sum=temp;
	}
}
int main(){
	cin>>c>>n;
	long long w[N]={};
	for(int i=0; i<n; i++){
		cin>>w[i];
		sum+=w[i];
	}
	if(sum<=c){
		cout<<sum; return 0;
	}
	sort(w, w+n);
	findMaxMass(w, n);
}
