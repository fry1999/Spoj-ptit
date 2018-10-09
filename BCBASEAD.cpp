#include<iostream>
#include<unordered_map>
using namespace std;
void Dynamic(string arr[], unordered_map <string, int> &umap){
	for(int i=0; i<20; ++i){
		arr[i]+='{';
		for(int j=0; j<i; ++j){
			if(j!=i-1) arr[i]= arr[i]+ arr[j]+',';
			else arr[i]= arr[i]+ arr[j];
		}
		arr[i]+='}';
		umap[arr[i]]=i;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	unordered_map <string, int> umap;
	int t;
	cin>>t;
	string a, b;
	string arr[30];
	Dynamic(arr, umap);
	for(int i=0; i<t; ++i){
		cin>>a>>b;
		cout<<arr[umap[a]+umap[b]]<<"\n";
	}
}
