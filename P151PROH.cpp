#include<iostream>
using namespace std;

bool kiemTraSoMaThuat(string s){
	int vt=0;
	while(vt<s.size()){
		if(s[vt]=='1'){
			if(s[vt+1]=='4'){
				if(s[vt+2]=='4'){
					vt=vt+3;
				}
				else vt=vt+2;
			}
			else vt=vt+1;
		}
		else return false;
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	if(kiemTraSoMaThuat(s)) cout<<"YES";
	else cout<<"NO";
}
