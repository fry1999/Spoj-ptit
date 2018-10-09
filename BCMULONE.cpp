#include<iostream>
using namespace std;

string productOne(long n){
	string answer="";
	for(int i=1; i<= (n-1)/9; ++i) answer+="123456790";
	int k = (n-1)%9;
	for(int i=1; i<=k; ++i) answer+= (i+'0');
	for(int i=k+1; i>=2; --i) answer+= (i+'0');
	for(int i=1; i<=(n-1)/9; ++i) answer+="098765432";
	answer+='1';
	return answer;
}
int main(){
	int t;
	long n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<productOne(n)<<endl;
	}
}
