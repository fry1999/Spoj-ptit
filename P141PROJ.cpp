#include<iostream>
using namespace std;
int main(){
	int d=0;
	char a[5][5];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; ++j){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<2; ++i){
		for(int j=0; j<2; ++j){
			d=0;
			for(int k=i; k<i+2; ++k){
				for(int p=j; p< j+2; p++){
					if(a[k][p]=='#') ++d;
				}
			}
			if(d<=0 || d>=3){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}
