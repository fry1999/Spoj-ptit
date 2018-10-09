#include<iostream>
#include<string.h>
using namespace std;

string maxNumber(string s, int k, int n){
	int d=k;
	string answer="";
	string temp="";
	int arr[s.size()+1];
	memset(arr, 1, sizeof(arr));
	while(1){
		bool f= true;
		for(int i=0; i<n-1 ; ++i){
			if(arr[i]!=0){
				for(int j=i+1; j<n; ++j){
					if(arr[j]!=0 && s[j]> s[i]){
						f=false;
						arr[i]=0;
						k--;
						break;
					}
				}
				if(k==0) break;
			}
		}
		if(f==true) break;
		
	}
	for(int i=0; i<n; ++i){
		if(arr[i]) temp+=s[i];
	}
	for(int i=0; i<n-d; ++i){
		answer+=temp[i];
	}
	return answer;
	
}
int main(){
	int n, k;
	string s;
	cin>>n>>k;
	cin>>s;
	cout<<maxNumber(s, k, n);
}
