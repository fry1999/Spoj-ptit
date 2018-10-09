#include<bits/stdc++.h>
using namespace std;

long long dynamic(long long w[], int n, long long c){
	for(long long i=0; i<=c; ++i) w[i]=0;
	for(int i=1; i<n; ++i){
		for(long long j=0; j<=c; ++j){
			F[i][j]=F[i-1][j];
			if(w[i] <= j && ) F[i][j]=w[i];
			
		}
	}
}
int main(){
	long long c;
	int n;
	cin>>c>>n;
	long long F[n+1][c+1];
	long long w[n+1];
	for(int i=1; i<=n; ++i){
		cin>>w[i];
	}
}
