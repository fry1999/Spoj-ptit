#include<iostream>
using namespace std;
int main(){
	int r, c, a, b;
	cin>>r>>c>>a>>b;
	char arr[r+1][c+1];
	char answer[501][501];
	if(c>r) {
	    int temp=a;
		a=b; b=temp;
	}
	int d=0;
	for(int i=0; i<r; ++i){
		d=0;
		for(int j=0; j<c; ++j){
			cin>>arr[i][j];
			for(int k=0; k<b; ++k){
				answer[i][d++]=arr[i][j];
			}
		}
	}
	for(int i=0; i<r; ++i){
		for(int k=0; k<a; ++k){
			for(int j=0; j<d; ++j)
			cout<<answer[i][j];
			cout<<endl;
		}
	}
	return 0;
}
