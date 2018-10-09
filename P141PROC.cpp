#include<iostream>
using namespace std;
int main(){
	long n, x=0;
	cin>>n;
	string s;
	for(long i=0; i<n; i++){
		cin>>s;
		if(s[0]=='+'||s[2]=='+') x++;
		else x--;
	}
	cout<<x;
	
}
