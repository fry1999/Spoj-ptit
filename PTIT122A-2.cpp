#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
string delete_Space(string s){
	string temp="";
	for(auto x: s){
		if(x!=' ') temp+=x;
	}
	return temp;
}
string rightExpression(string s){
	stack <char> st;
	int arr[s.size()];
	memset(arr, 0, sizeof(arr));
	string temp="";
	for(int i=0 ; i<s.size(); ++i){
		if(s[i]=='('){
			if(i==0){
				st.push('0');
			}
			else if(s[i-1]=='-') {
				bool f1= false, f2= false;
				for(int j=i+1; j<s.size(); ++j){
					if(s[j]=='+'||s[j]=='-'){
						temp+=s[i];
						f1= true;
					}
					if(s[j]==')' && arr[j]==0){
						f2= true;
						arr[j]=1;
						break;
					}
				}
				if(f1==true && f2==true){
					st.push(')');
					temp+=s[i];
				}
				else st.push('0');
			}
			else{
				st.push('0');
			}
		}
		else if(s[i]==')'){
			if(st.top()=='0'){
				st.pop();
			}
			else{
				temp+=s[i];
				st.pop();
			}
		}
		else temp+=s[i];
	}
	while(!st.empty()){
		if(st.top()!='0') temp+=st.top();
		st.pop();
	}
	return temp;
}
int main(){
	int m;
	cin>>m;
	string s;
	cin.ignore();
	for(int i=0; i<m; ++i){
		getline(cin, s);
		s= delete_Space(s);
		cout<<s<<endl;
		cout<<rightExpression(s)<<endl;
	}
}
