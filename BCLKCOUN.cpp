#include<iostream>
using namespace std;

int kt[101][101];
int n, m;
char a[101][101];

int soAo(){
	int d=0;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			if(a[i][j]=='W'){
				if(i!=0) kt[i-1][j]=1;
				if(i!=0 && j!=0) kt[i-1][j-1]=1;
				if(j!=0) kt[i][j-1]=1;
				if(j!= 0 && i!=n-1) kt[i+1][j-1]=1;
				if(i!= n-1) kt[i+1][j]=1;
				if(i!=n-1 && j!=m-1) a[i+1][j+1]=1;
				if(j!=m-1) a[i][j+1]=1;
				if(kt[i][j]!=1) ++d;
			}
		}
	}
	return d;
}
int main(){
	cin>>n>>m;
	for(int i=0; i<n; ++i){
		for(int j=0; j<m; ++j){
			cin>>a[i][j];
		}
	}
	cout<<soAo();
	
}
