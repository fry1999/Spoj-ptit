#include<iostream>
using namespace std;

bool soMayMan(string s){
	long sum1=0, sum2=0;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='4'){
			if(i<s.size()/2){
				sum1+=4;
			}
			else sum2+=4;
		}
		else if(s[i]=='7'){
			if(i<s.size()/2){
				sum1+=7;
			}
			else sum2+=7;
		}
		else return false;
	}
	return sum1==sum2;
}
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	if(soMayMan(s)) cout<<"YES";
	else cout<<"NO";
}
