#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string arr[]={"0","1", "2","3", "332", "5","53","7","7222","9"};
void capGiaiThua(string a){
	vector <int> vect;
	string answer="";
	for(int i=0; i<a.size(); ++i){
		if(a[i]-'0'>1){
			answer+=arr[a[i]-'0'];
		}
	}
	for(auto x: answer){
		vect.push_back(x-'0');
	}
	sort(vect.begin(), vect.end(), greater<int>());
	for(int i=0; i<vect.size(); i++){
		cout<<vect[i];
	}
}
int main(){
	int t, n;
	string a;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>a;
		capGiaiThua(a);
	}
}
