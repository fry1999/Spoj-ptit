#include<iostream>
using namespace std;
int main(){
	long long a=0, b=0;
	int t;
	string s;
	cin>>t;
	while(t--){
		int i=-1;
		cin>>s;
		while(s[++i]!='/'){
			a= a*10 + s[i];
		}
		for(int j=i+1; j<s.size(); ++j){
			b= b*10 + s[j];
		}
		while(a!=b){
			if(a>b){
				cout<<"R";
				int temp=b;
				b=a-b;
				a=temp;
			}
			else{
				cout<<"L";
				int temp=a;
				a=b-a;
				b= temp;
			}
		}
		cout<<"\n";
	}
	return 0;
}
