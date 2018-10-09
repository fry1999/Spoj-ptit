#include<iostream>
#include<string>
using namespace std;
int main(){
	string S;
	cin>>S;
	for(int i=0; i<S.size(); i++){
		if(S[i]>='A'&&S[i]<='Z') S[i]+=32;
	}
	for(int i=0; i<S.size(); i++){
		if(S[i]!='o'&& S[i]!='a' &&S[i]!='i'&&S[i]!='e'&&S[i]!='u'&&S[i]!='y' ){
			cout<<"."<<S[i];
		}
	}
}
