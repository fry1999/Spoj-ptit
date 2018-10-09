#include<iostream>
#include<stack>
using namespace std;

bool isSentence(string s){
	stack <char> c;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='(') c.push(')');
		else if(s[i]=='[') c.push(']');
		else if(s[i]==')' || s[i]==']'){
			if(!c.empty() && s[i] == c.top()) c.pop();
			else return false;
		}
	}
	if(c.empty()) return true;
	return false;
}
int main(){
	string s;
	while(1){
		getline(cin, s);
		if(s==".") break;
		if(isSentence(s)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}
