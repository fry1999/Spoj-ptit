#include<iostream>
#include<stack>
using namespace std;
int showWeightOfElement(string s){
	int w=0;
	stack <int> g;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='('){
			g.push(0);
		}
		else if(s[i]=='C') g.push(12);
		else if(s[i]=='O') g.push(16);
		else if(s[i]=='H') g.push(1);
		else if(s[i] >='2' && s[i]<='9'){
			int temp = g.top() * (s[i]-'0');
			g.pop();
			g.push(temp);
		}
		else if(s[i]==')'){
			w=0;
			while(g.top()!=0){
				w+=g.top();
				g.pop();
			}
			g.pop();
			g.push(w);
		}
	}
	w=0;
	while(!g.empty()){
		w+=g.top();
		g.pop();
	}
	return w;
	
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	cout<<showWeightOfElement(s);
	
}
