#include<iostream>
#include<vector>
using namespace std;
int dd[251]={};
vector<int> ds[251];
void BFS_Q(int i){
	dd[i]=1;
	for(int j=0; j<ds[i].size(); j++){
		int t=ds[i].at(j);
		dd[t]=1;
	}
}
int main(){
	long n, m,a , b, kt=0;
	cin>>n>>m;
	for(long i=0; i<m; i++){
		cin>>a>>b;
		ds[a].push_back(b);
		ds[b].push_back(a);
	}
	BFS_Q(1);
	for(int i=1; i<=n ; i++){
		if(dd[i]==0){
			cout<<i<<endl;
			kt=1;
		}
	}
	if(kt==0) cout<<"0";
	
	
	
}
