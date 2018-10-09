#include<iostream>
#include<stack>
using namespace std;

void showStack(stack<char> st){
	if(!st.empty()){
		char temp=st.top();
		st.pop();
		showStack(st);
		cout<<temp;
	}
}
void rightExpression(string s){
	stack<char> st;
	stack<char> temp;
	for(int i=0; i<s.size(); ++i){
		if(s[i]!=' '){
			if(s[i]=='('){
				if(!st.empty()&& st.top()=='-'){
					st.push('(');
					temp.push(')');
				}
				else{
					temp.push('0');
				}
			}
			else if(s[i]==')'){
				if(!temp.empty()){
					if(temp.top()==')'){
						st.push(temp.top());
						temp.pop();
					}
					else temp.pop();
				}
			}
			else{
				st.push(s[i]);
			}
		}
	}
	showStack(st);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//freopen ("/dev/tty", "a", stdout);
	//freopen("input.out", r, stdin);
	//freopen("input.out", "a", stdout);
	int m;
	string s;
	cin>>m;
	for(int i=0; i<m; ++i){
		cin.ignore();
		getline(cin, s);
		rightExpression(s);
		cout<<"\n";
	}
}
