#include<iostream>
#include<algorithm>
using namespace std;

long maxDistance(string s){
	int d=0, ma=0, d1=0;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='L') {
			d+=-1;
			ma = max(ma, abs(d));
		}
		else if(s[i]=='R'){
			d+=1;
			ma= max(ma, abs(d));
		}
		else d1++;
	}
	return ma+d1;
}
int main(){
	string s;
	cin>>s;
	cout<<maxDistance(s);
	
}
