#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	vector<long long > answer;
	for(int i=0; i<n; ++i){
		cin>>s;
		int vt=0;
		for(int j=0; j<s.size(); ++j){
			if(s[j]>='0' && s[j]<='9'){
				long long so=0;
				for(int p=j ; p<s.size(); ++p){
					so=so*10+ (s[p]-'0');
					if(s[p+1] <'0' || s[p+1]>'9'){
						j=p+1;
						break;
					}
				}
				answer.push_back(so);
			}
		}
	}
	sort(answer.begin(), answer.end());
	for(auto x: answer) cout<<x<<endl;
}
