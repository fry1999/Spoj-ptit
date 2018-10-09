#include<iostream>
using namespace std;
int n, a[101];
void nhap(){
	cin>>n;
}
void xuat(){
	for(int t=0; t<n; t++){
		cout<<a[t];
	}
	cout<<endl;
}

void find(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n-1) xuat();
		else find(i+1);
	}
}
int main(){
	nhap();
	find(0);
}
