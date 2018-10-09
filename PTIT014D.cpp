#include<iostream>
using namespace std;

int kiemTraSoMM(string s){
	if(s=="0") return 0;
	long sum=0;
	for(auto x: s){
		sum+=(x-'0');
	}
	if(sum%9==0) return 1;
	else return 0;
}
int main(){
	int t;
	cin>>t;
	string s;
	for(int i=0; i<t; ++i){
		cin>>s;
		cout<<kiemTraSoMM(s)<<endl;
	}
}
