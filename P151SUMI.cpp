#include<iostream>
#include<vector>
using namespace std;
string teamWin(long n, vector<string> arr){
	int d1=0;
	for(auto x: arr){
		if(x=="Vietnam") ++d1;
	}
	if(d1> n-d1) return "VietNam";
	return "Indonesia";	
}
int main(){
	long n;
	string s;
	vector <string> arr;
	cin>>n;
	while(n--){
		cin>>s;
		arr.push_back(s);
	}
	cout<<teamWin(n, arr);
}
