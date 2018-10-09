#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool phoneBook(vector <string> vect){
	int end=vect.size()-1;
	for(int i=0; i<vect.size(); ++i){
		int d= vect[i].size();
		for(int j=i+1; j<vect.size(); ++j){
			if(vect[j].substr(0, d)==vect[i]) return false;
		}
	}
	return true;
}
int main(){
	int t, n;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		vector <string> vect;
		for(int i=0; i<n; ++i){
			cin>>s;
			vect.push_back(s);
		}
		sort(vect.begin(), vect.end());
		if(phoneBook(vect)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
