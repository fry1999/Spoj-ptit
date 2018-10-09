#include<iostream>
using namespace std;
long long giaiThua(long s){
	if(s==1||s==0) return 1;
	return s*giaiThua(s-1);
}
int main(){
	int t;
	string s;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>s;
		long long coSoMuoi=0;
		for(long j=0; j<s.size(); j++){
			coSoMuoi+= (s[s.size()-1-j]-'0')* giaiThua(j+1);
		}
		cout<<coSoMuoi<<endl;
	}
}
