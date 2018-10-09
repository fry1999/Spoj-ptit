#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream file;
	file.open("out.txt", ios::out);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n, m;
	long d=0, l, r;
	cin>>n>>m;
	long c;
	for(long i=0; i<n; ++i){
		cin>>c;
		if(c==-1) ++d;
	}
	d= min(d,n-d);
	for(long i=0; i<m; ++i){
		cin>>l>>r;
		if((r-l+1)%2 == 0 && (r-l+1) / 2 <= d) file<<"-1\n";
		else file<<"0\n";
	}
	file.close();
}
