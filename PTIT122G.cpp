#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool checkSymmetric(long a){
	vector <int> vec;
	while(a!=0){
		vec.push_back(a%10);
		a/=10;
	}
	for(int i=0; i<vec.size(); ++i){
		if(vec[i]!=vec[vec.size()-i-1]) return false;
	}
	return true;
}
bool checkSymmetric2(string s){
	for(int i=0; i<s.size(); ++i){
		if(s[i]!=s[s.size()-1-i]) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(1){
		cin>>s;
		long a=0, k=0;
		if(s=="0") return 0;
		if(checkSymmetric2(s)){
			cout<<"0"<<endl;
			continue;
		}
		while(s[k]=='0'){
			k++;
		}
		long t=0;
		for(int i=k; i<s.size(); ++i){
			t = t*10 + (s[i]-'0');
		}
		if(k==0){
			long a= t;
			while(!checkSymmetric(a)){
				a++;
			}
			cout<<a-t<<endl;
		}
		else{
			if(k==s.size()-k) cout<<pow(10, k)- t<<endl;
			else{
				for(int i=k; i<s.size()-k; ++i){
					a= a*10 + (s[i]-'0');
				}
				a++;
				while(!checkSymmetric(a)){
					a++;
				}
				cout<<a*pow(10, k)- t<<endl;
			}
		}
	}
}
