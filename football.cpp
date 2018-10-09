#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n, score=0;
	string s, temp1="", temp2="";
	cin>>n;
	bool flag=true;
	for(int i=0; i<n; i++){
		cin>>s;
		if(flag==true){
			temp1=s;
			flag=false;
		}
		if(temp1==s){
			score++;
		}
		else temp2=s;
	}
	if(score>(n-score)) cout<<temp1;
	else cout<<temp2;
}
