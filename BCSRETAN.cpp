#include<iostream>
using namespace std;

void print(int k){
	k--;
	if(k==0){
		cout<<"4"; return ;
	}
	if(k==1){
		cout<<"7"; return ;
	}
	print(k/2);
	if(k%2==0) cout<<"4";
	else cout<<"7";
}
int main()
{
	long long k;
	cin>>k;
	print(k);
	
}
