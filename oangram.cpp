#include<bits/stdc++.h>
using namespace std;
int main(){
	string S;
	long long arr[256]={};
	int n;
	cin>>n;
	cin>>S;
	for(int i=0; i<S.size(); i++){
		if(S[i]>='A'&&S[i]<='Z'){
			S[i]+=32;
		}
		arr[S[i]]+=1;
	}
	for(int i='a'; i<='z'; i++){
		if(arr[i]<1){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
}
