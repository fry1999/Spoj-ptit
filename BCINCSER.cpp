#include<iostream>
using namespace std;
void timDoanTang(long long a[], long long answer[], long long n ){
	answer[1]=1;
	for (long long i=2; i<=n; i++){
		if(a[i]>=a[i-1]){
			answer[i]=answer[i-1]+1;
		}else answer[i]=1;
	}
	int max=answer[1];
	for(int i=2; i<=n; i++){
		if(answer[i]>max) max=answer[i];
	}
	cout<<max;
}
int main(){
	long long n;
	cin>>n;
	long long a[n+5], answer[n+5];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	 timDoanTang(a, answer, n);
}
