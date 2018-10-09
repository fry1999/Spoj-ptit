#include<iostream>
const int N = 1e4;
int root[N+4];
// Ham lay goc ban dau cau v, v;
int get(int s){
	if(!root[s]) return s;
	return root[s]=get(root[s]);
}
using namespace std;
int main(){
	ios:: sync_with_stdio(0);// Vo hieu hoa su dong bo cua c va c++;
	cin.tie(NULL); //cout.tie(NULL);
	int p, luaChon, u, v;
	cin>>p;
	for(int i=1; i<=p; i++){
		cin>>u>>v>>luaChon;
		int U=get(u), V=get(v);
		if(luaChon==1){
			if(U!=V) root[U]=V;// mang root dc tao mot cach lien tiep nha!
			
		}else if(luaChon==2){
			if(U==V) cout<<"1\n";
			else cout<<"0\n";
		}
		
	}
}
