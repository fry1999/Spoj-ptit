#include<iostream>
#include<string.h>
using namespace std;
char s[101][101];

int FoundSum(int R, int C){
	bool flag[R+1][C+1];
	memset(flag, false, sizeof(flag));
	int sum=0;
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			if(flag[i][j] == false){
				if(s[i][j]=='#'){
					sum++;
					flag[i][j]=true;
					if(i!=0) flag[i-1][j]=true;
					if(i!=R-1) flag[i+1][j]=true;
					if(j!=0) flag[i][j-1]=true;
					if(j!=C-1) flag[i][j+1]=true;
				}
			}
		}
	}
	return sum;
}

int main(){
	int R, C;
	cin>>R>>C;
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			cin>>s[i][j];
		}
	}
	cout<<FoundSum(R, C);
}

