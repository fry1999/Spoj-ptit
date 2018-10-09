#include<iostream>
using namespace std;
void demNghichThe(long long a[], long long N){
	int count=0;
	for(int i=1; i<=N; i++){
    	for(int j=i+1; j<=N; j++){
	    	if(a[i]>a[j]) ++count;
		}
	}
	cout<<count;
}
int main(){
	long long N;
	cin>>N;
	long long a[N+5];
	for(int i=1; i<=N; i++){
		cin>>a[i];
	}
	demNghichThe(a, N);
}
