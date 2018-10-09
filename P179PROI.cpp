#include<iostream>
using namespace std;
int A, B, T, P;
int c[1001][1001], b[1001];
int t, answer[101];
int UCLN(int a, int b){
	if(!b) return a;
	return (b, a%b);
}
void demSoThanhPhanLienThong(){
	for(int i=A; i<=B; i++){
		for(int j=i+1; j<B; j++){
			int m=UCLN(i, j);
			if(m>=P) c[i][j]=1;
		}
	}
	int d=0;
	for(int i=A; i<=B; i++){
		if(b[i]==0){
			d++; b[i]=d;
			for(int j = A; j<=B; j++) 
			     for(int l=A; l<=B; l++){
				     if(c[l][j]==1 && b[l]==d && b[j]==0) b[j]=d;
		    	}
		}
	}
	int max=b[A];
	for(int i=A; i<=B; i++){
		if(b[i]>max) max=b[i];
	}
	answer[t]=max;
}
int main(){
	cin>>T;
	for(t=1; t<=T; t++){
		cin>>A>>B>>P;
		for(int i=A; i<=B; i++){
			b[i]=0;
			for(int j=A; j<=B; j++){
				c[i][j]=0;
			}
		}
		demSoThanhPhanLienThong();
	}
	for(int i=1; i<=T; i++){
		cout<<"Case #"<<i<<": "<<answer[i]<<endl;
	}
	
	
}
