#include<iostream>
#include<vector>
using namespace std;

string letter(string s){
	int r;
	string answer="";
	long n=s.size();
	for(long i=n/2; i>=1; i--){
		if(n%i==0 && i <= n/i){
			 r=i;
			 break;
		}
	}
	vector<vector<char> > vect(r);
	for(long long i=0; i<n; ++i){
		vect[i%r].push_back(s[i]);
	}
	for(int i=0; i<r; ++i){
		for(int j=0; j<n/r; ++j){
			answer+=vect[i][j];
		}
	}
	return answer;
}
int main(){
	string s;
	cin>>s;
	cout<<letter(s);
}
