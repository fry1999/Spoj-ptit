#include<iostream>
#include<vector>
using namespace std;
int main(){
	int T;
	cin>>T;
	string s;
	for(int t=0; t<T; t++){
		cin>>s;
		int dem=0;
		vector<int> answer;
		for(int i=1; i<=s.size(); i++){
			dem++;
			if(s[i]!=s[i-1]){
				answer.push_back(dem);
				answer.push_back(s[i-1]-'0');
				dem=0;
			}
		}
		for(int i=0; i<answer.size(); i++){
			cout<<answer[i];
		}
		cout<<"\n";
		
	}
}
