#include<iostream>
using namespace std;
int main(){
	long n, a[101][101];
	cin>>n;
	for(int i=1; i<=n ; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	long x=(a[1][2] + a[1][3] - a[2][3])/2;
	cout<<x<<" ";
	for(int i=2; i<=n; i++){
		cout<<a[1][i]-x<<" ";
	}
}
