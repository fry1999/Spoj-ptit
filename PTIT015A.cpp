#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void maxNumber(string s1, string s2, string s3){
	vector <int> ans;
	for(auto x: s1) ans.push_back(x-'0');
	for(auto x: s2) ans.push_back(x-'0');
	for(auto x: s3) ans.push_back(x-'0');
	sort(ans.begin(), ans.end(), greater<int>());
	for(auto x: ans) cout<<x;
	cout<<endl;
}
int main(){
	string s1, s2, s3;
	int k;
	cin>>k;
	while(k--){
		cin>>s1>>s2>>s3;
		maxNumber(s1, s2, s3);
	}
}
