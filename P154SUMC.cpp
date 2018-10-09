#include<iostream>
using namespace std;
int maleOrFemale(string s){
	int arr[27]={};
	int d=0;
	for(auto x: s){
		if(arr[x-'a']==0){
			d++;
			arr[x-'a']=1;
		}
	}
	return d%2;
}
int main(){
	string s;
	cin>>s;
	if(maleOrFemale(s)==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}
