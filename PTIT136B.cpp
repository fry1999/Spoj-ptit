#include<iostream>
using namespace std;

void card(char ans[][103], int r, int c, int a, int b){
	for(int i=0; i<r; ++i){
		for(int j=c, k=c-1; j<2*c, k>=0; ++j, --k){
			ans[i][j]=ans[i][k];
		}
	}
	for(int i=r, k=r-1; i<2*r, k>=0; ++i, --k){
		for(int j=0; j<c; ++j){
			ans[i][j]=ans[k][j];
		}
	}
	for(int i=r; i<2*r; ++i){
		for(int j=c, k=c-1; j<2*c, k>=0; ++j, --k){
			ans[i][j]=ans[i][k];
		}
	}
	for(int i=0; i<2*r; ++i){
		for(int j=0; j<2*c; ++j){
			if(i==a-1 && j==b-1){
				if(ans[i][j]=='.') ans[i][j]='#';
				else ans[i][j]='.';
			}
			cout<<ans[i][j];
		}
		cout<<endl;
	}
}
int main(){
	int r, c, a, b;
	cin>>r>>c;
	char ans[103][103];
	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){
			cin>>ans[i][j];
		}
	}
	cin>>a>>b;
	card(ans, r, c, a, b);
}
