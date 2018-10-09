#include<iostream>
#include<string.h>
using namespace std;
int get(long root[], long a){
	if(root[a]==0) return a;
	return (root[a]);
}

int  main(){
	long n, m, a, b;
	cin>>n>>m;
	
	long root[n+1];
	memset(root, 0, n+1);
	for(long i=0; i< m; i++){
		cin>>a>>b;
		long A= get(root, a), B= get(root, b);
		if(A < B) root[b]=A;
		else root[a]= B;
	}
	for(long i=1; i<=n; i++){
		if(root[i]!=1) cout<<i<<endl;
	}
}
