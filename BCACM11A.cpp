#include<iostream>
using namespace std;
int loaiBa(long long  s){
	long long a=0, m=s;
	while(s>0){
		a= a*10+s%10;
		if(a==0) return 0;
		s/=10;
	}
	if(a==m) return 1;
	return 0;
}
int loaiHai(long long s){
	long long a=0;
	while(s>0){
		a+=s%10;
		s/=10;
	}
	if(a%10==0) return 1;
	return 0;
}
int loaiMot(long long s){
	long long a=0;
	while(s>0){
		a=s%10;
		if(a==0) return 0;
		s/=10;
	}
	return 1;
}
int main(){
	long long T, n, m, k;
	long long d1=0, d2=0, d3=0;
	cin>>T;
	for(long long i=100000; i<1000000; i++){
		if(loaiMot(i)&&loaiHai(i)&&loaiBa(i)) ++d1;
		if(loaiHai(i)&&loaiBa(i)) ++d2;
		if(loaiBa(i)) ++d3;
	}
	for(long long t=0; t<T; t++){
		cin>>n>>m>>k;
		if(n<=d1 && m<=d2-n && k<=d3-n-m) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
}
