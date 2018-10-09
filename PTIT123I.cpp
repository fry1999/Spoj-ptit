#include<iostream>
using namespace std;
int main(){
	int T;
	string s;
	for(int t=0; t<T; t++){
		cin>>s;
		int dem=0;
		string b="";
		for(int i=1; i<s.size(); i++){
			dem++;
			if(s[i]!=s[i-1]){
				b=b+'dem'+s[i-1];
				dem=1;
			}
			cout<<b;
		}
	}
}
