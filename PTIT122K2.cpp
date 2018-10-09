#include<iostream>
#include<stack>
using namespace std;

void locate(stack <int> &st, int a){
	stack <int> temp;
	int d=0;
	while(st.top()!=a){
		temp.push(st.top());
		st.pop();
		d++;
	}
	st.pop();
	cout<<d<<" ";
	while(!temp.empty()){
		st.push(temp.top());
		temp.pop();
	}
	st.push(a);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n, m, a;
	cin>>t;
	while(t--){
		stack <int> st;
		cin>>n>>m;
		for(int i=n; i>=1; --i){
			st.push(i);
		}
		for(int i=0; i<m; ++i){
			cin>>a;
			locate(st, a);
		}
		cout<<"\n";
	}
	
}
