#include<iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long n;
	cin>>n;
	string temp="moo";
	string ans;
	for(int i=1; i<27; ++i){
		ans = temp+'m';
		for(int j=0; j<i+2; ++j){
			ans +='o';
		}
		ans+=temp;
		temp=ans;
	}
	cout<<ans.size();
	cout<<ans[n-1];
}
