#include<iostream>
#include<cmath>
using namespace std;
void dequy(string s, int d, int k){
	if(d==k) {
		cout<<s[k];
	}
	else{
		string temp="m";
	   	for(int i=0; i<d+2; ++i){
			temp+='o';
		}
		s=s+temp+s;
		d++;
		dequy(s, d, k);
	}
}
int main(){
	long long n, k;
	string s="moo";
	cin>>n;
	for(long i=1; i<n; i++){
		if(n <= pow(3, i)){
			k=i-1;
			break;
		}
	}
	int d=0;
	dequy(s,d,k);
}
