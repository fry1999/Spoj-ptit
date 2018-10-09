#include<bits/stdc++.h>
using namespace std;
bool isValid(string S){
	long long l=S.length()-1, i=0;
	while(i<=l){
		if(abs(S[i]-S[i+1])!=abs(S[l-i-1]-S[l-i])){
			return false;
		}
		++i;
	}
	return true;
}
int main(){
	long long T;
	cin>>T;
	for(long long j=0;j<T; j++){
 		string S;
      	cin>>S;
      	if(isValid(S)) cout<<"YES\n";
      	else cout<<"NO\n";
    }
}
