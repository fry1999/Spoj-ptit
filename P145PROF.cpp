#include<iostream>
#include<algorithm>
using namespace std;

long arr[24][60]={};
int main(){
	int h,m;
	long n, answer=0;
	cin>>n;
	for(long i=0; i<n; ++i){
		cin>>h>>m;
		++arr[h][m];
		answer= max(answer, arr[h][m]);
	}
	cout<<answer;
	
}
