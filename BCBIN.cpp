#include<iostream>
#define N 100
using namespace std;
int main(){
    int m=0, x, y, z, p;
	int lienThong[N][N]={};
	cin>>p;
	int answer[N];
	for(int i=1; i<=p; i++){
		cin>>x>>y>>z;
		if(z==1) lienThong[x][y]=1;
		if(z==2) answer[m++]=(lienThong[x][y]==1) ? 1: 0;
	}
	for(int i=0; i<m; i++) cout<<answer[i]<<endl;
}
