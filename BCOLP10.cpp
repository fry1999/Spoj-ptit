#include<iostream>
using namespace std;
long doDo(string s1, string s2){
	int arr[26]={};
	long d=0;
	for(long i=0; i<s1.size(); i++){
		++arr[s1[i]-'a'];
	}
	for(long i=0; i<s2.size(); i++){
		++arr[s2[i]-'a'];
	}
	for(int i=0; i<=26; i++){
		d+=arr[i]%2;
	}
	return d;
}
int main(){
	string s1, s2;
	cin>>s1>>s2;
	cout<<doDo(s1, s2);
}
