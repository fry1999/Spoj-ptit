#include<iostream>
using namespace std;
bool searchFile(string p, string a){
	int k=0, d1=0, d2=0;
	for(int i=0; i<p.size(); ++i){
		if(p[i]!='*'){
			d1++;
			for(int j=k; j<a.size(); ++j){
				if(p[i] == a[j]){
					++d2;
					k=j+1;
					break;
				}
			}
		}
	}
	if(p[0]!='*'){
		if(a[0]!=p[0]) return false;
	}
	if(p[p.size()-1]!='*' && p[p.size()-1]!=a[a.size()-1]){
		return false;
	}
	if(d1==d2) return true;
	return false;
}
int main(){
	string p, a;
	cin>>p;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>a;
		if(searchFile(p, a)) cout<<a<<"\n";
	}
}
