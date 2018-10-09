#include<iostream>
#include<algorithm>
using namespace std;
inline long longestCommonSubsequence(string a, string b, long n, long m){
	long L[n+1][m+1];
	for(long i=0; i<=n; ++i){
		for(long j=0; j<=m; ++j){
			if(i==0 || j==0) L[i][j]=0;
			else if(a[i-1]==b[j-1]){
				L[i][j]=L[i-1][j-1]+1;
			}
			else {
				L[i][j]=max(L[i-1][j], L[i][j-1]);
			}
		}
	}
	return L[n][m];
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	cin>>a>>b;
	long n=a.size(), m=b.size();
	cout<<longestCommonSubsequence(a, b, n, m);
}
