#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string replacingDigits(string a, string s){
	vector <char> vect;
	for(char x: s) vect.push_back(x);
	sort(vect.begin(), vect.end());
	long vt=0;
	for(int i=0; i<vect.size(); ++i){
		bool flag=false;
		for(int j=vt; j<a.size(); ++j){
			if((vect[vect.size()-i-1]-'0') > (a[j]-'0')){
				a[j]=vect[vect.size()-i-1];
				vt=j+1;
				flag=true;
				break;
			}
		}
		if(flag==false) return a;
	}
	return a;
}
int main(){
	string a, s;
	cin>>a>>s;
	cout<<replacingDigits(a, s);
}
