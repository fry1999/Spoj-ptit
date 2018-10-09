#include<iostream>
using namespace std;
int main(){
	int n, d=0, p, q;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>p>>q;
		if(q-p >=2) ++d;
	}
	cout<<d;
}
