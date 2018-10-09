#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int r, c, sum=0;
	cin>>r>>c;
	char a;
	char arr1[r];
	memset(arr1, c, sizeof(arr1));
	char arr2[c];
	memset(arr2, r, sizeof(arr2));
	for(int i=0; i<r; ++i){
		for(int j=0 ;j<c; ++j){
			cin>>a;
			if(a=='S'){
				arr1[i]=0;
				arr2[j]=0;
			}
		}
	}
	for(auto x: arr1){
		if(x==0) r-=1;
		sum+=x;
	}
	for(auto x: arr2){
		if(x==0) c-=1;
		sum+=x;
	}
	cout<<sum-r*c;
}
