#include<bits/stdc++.h>
using namespace std;

void moveDish(int n, char pillarA, char pillarB, char pillarC, int k, unordered_map<char, int> &umap){
	int static steps=0;
	if(n==0) return;
	moveDish(n-1, pillarA, pillarC, pillarB, k, umap);
	steps++;
	umap[pillarA]--;
	umap[pillarC]++;
	if(steps==k){
		cout<<umap[pillarA]<<" "<<pillarA<<" -> "<<pillarC;
		return;
	}
	moveDish(n-1, pillarB, pillarA, pillarC, k, umap);
}
int main(){
	int n, k, t=0;
	char pillarA='A', pillarB='B', pillarC='C';
	while(1){
		unordered_map<char, int> umap;
		t++;
		cin>>n>>k;
		if(n==0 && k==0) return 0;
		umap[pillarA]=n;
		cout<<"Case "<<t<<": ";
		moveDish(n, pillarA, pillarB, pillarC, k, umap);
	}
}
