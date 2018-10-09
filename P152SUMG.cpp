#include<iostream>
#include<cmath>
using namespace std;
int kiemTra(int s){
	if(s<2) return 0;
	for(int p=2; p<=sqrt(s); ++p){
		if(s%p==0) return 0;
	}
	return 1;
}
int main(){
	int x, y;
	cin>>x>>y;
	for(int i=x+1; i<=y; ++i){
		if(kiemTra(i)){
			if(i==y) cout<<"YES";
			else cout<<"NO";
			return 0;
		}
	}
	cout<<"NO";
}
