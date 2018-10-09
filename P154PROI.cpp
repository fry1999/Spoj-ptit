#include<iostream>
using namespace std;

bool checkString(string s){
	long n=s.size();
	for(long i=1; i<s.size(); ++i){
		if(abs(s[i]-s[i-1]) != abs(s[n-i]-s[n-i-1])) return false;
	}
	return true;
}
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		if(checkString(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
