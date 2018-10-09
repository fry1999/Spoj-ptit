#include<bits/stdc++.h>
using namespace std;

long soLuong(string w, string s){
	int cas, index;
	long amount=1;
	stack<int> st; 
	for(int i=0; i<w.size(); ++i){
		if(w[i]!='?'){
			if(w[i]>s[i]){
				cas = 1;
				index = i;
				break;
			}
			if(w[i] < s[i]){
				cas =2;
				index=i;
				break;
			}
		}
		else {
			cas =3;
			st.push(s[i]-'0');
		}
	}
	if(cas==1){
		for(int i=index ; i<w.size(); ++i){
			if(w[i]=='?') st.push(0);
		}
		while(!st.empty()){
			amount *= (9-st.top()+1);
			st.pop();
		}
		return amount;
	}
	else if(cas == 2){
		bool f= false;
		while(!st.empty()){
			if(st.top()!=9) {
				amount*=(9-st.top());
				st.pop();
				f= true;
				break;
			}
			else st.pop();
		}
		if(f==false) return 0;
		while(!st.empty()){
			amount*= (9- st.top()+1);
			st.pop();
		}
		for(int i=index ; i<w.size(); ++i){
			if(w[i]=='?') st.push(0);
		}
		while(!st.empty()){
			amount*=(9-st.top()+1);
		}
		return amount;
	}
	else if(cas == 3){
		while(!st.empty()){
			if(st.top()!=9) {
				amount*=(9-st.top());
				st.pop();
				break;
			}
			else st.pop();
		}
		while(!st.empty()){
			amount *= (9- st.top()+ 1);
			st.pop();
		}
		return amount;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string w, x;
	while(1){
		cin>>w;
		if(w=="#") break;
		cin>>x;
		cout<<soLuong(w, x)<<"\n";
	}
}
