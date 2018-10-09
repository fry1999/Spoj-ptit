#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char diamond[n+1][n+1];
	for(int i=0; i<=n/2; ++i){
		for(int j=0; j<=n/2; ++j){
			if(j>=n/2-i) diamond[i][j]='D';
			else diamond[i][j]='*';
		}
	}
	for(int i=0; i<=n/2; ++i){
		for(int j=n/2; j<n; ++j){
			if(j<=n/2+i) diamond[i][j]='D';
			else diamond[i][j]='*';
		}
	}
	for(int i=n/2; i<n; ++i){
		for(int j=0; j<=n/2; ++j){
			if(i<=n/2+j) diamond[i][j]='D';
			else diamond[i][j]='*';
		}
	}
	for(int i=n/2; i<n; ++i){
		for(int j=n/2; j<n; ++j){
			if(j < n + n/2 -i) diamond[i][j]='D';
			else diamond[i][j]='*';
		}
	}
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			cout<<diamond[i][j];
		}
		cout<<endl;
	}
	
}
