#include<iostream>
#include<string.h>
using namespace std;

bool theSameString(string s1, string s2){
	int arr[27];
	memset(arr, 0, sizeof(arr));
	for(auto x: s1){
		++arr[x-'a'];
	}
	for(auto x: s2){
		--arr[x-'a'];
	}
	for(auto x: arr){
		if(x!=0) return false;
	}
	return true;
}
int main(){
	string s1, s2;
	int t=0;
	while(1){
		t++;
		cin>>s1>>s2;
		if(s1=="END" && s2=="END") break;
		if(theSameString(s1, s2)) cout<<"Case "<<t<<": same"<<endl;
		else cout<<"Case "<<t<<": different"<<endl;
	}
}
