#include<iostream>
#include<vector>
using namespace std;

int doDai(string s){
	vector<int> arr;
	for(long i=0; i<s.size(); ++i){
		if(s[i]=='1') arr.push_back(i);
	}
	long d= arr[2]+1;
	for(long i=3; i<arr.size(); i++){
		long temp=(arr[i]-1)-(arr[i-3] +1);
		if(temp > d) d= temp;	
	}
	return d;
	
}
int main(){
	long n;
	cin>>n;
	string s;
	cin>>s;
	cout<<doDai(s);
}
