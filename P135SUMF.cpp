#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long answer=0;
	for(int i=0; i<=n; ++i){
		for(int j=i; j<=n; ++j){
			answer+=i+j;
		}
	}
	cout<<answer;
}
