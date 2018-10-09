#include<iostream>
using namespace std;

void tinhTong(string a, string b){
	long answer[101], nho=0;
	long n=a.size();
	for(long i=0; i<n; i++){
		answer[n-i-1]=(a[n-i-1]-'0')+ (b[n-i-1]-'0')+nho;
		if(n-i-1!=0){
			answer[n-i-1]= answer[n-i-1]%10;
			nho=answer[n-i-1]/10;
		}
	}
	for(long long i=0; i<n; i++){
		cout<<answer[i];
	}
	cout<<" ";
}

void xuLi(string a, string b){
	for(long i=0; i<a.size(); i++)
	{
		if((a[i]-'0')==6) a[i]=5+'0';
		if((b[i]-'0')==6) b[i]=5+'0';
	}
	tinhTong(a, b);
	for(long i=0; i<a.size(); i++){
		if((a[i]-'0')==5) a[i]=6+'0';
		if((b[i]-'0')==5) b[i]=6+'0';
	}
	tinhTong(a,b);
}
int main(){
	string a, b;
	cin>>a>>b;
	while(a.size()!=b.size()){	
		if(a.size()>b.size()){
			b='0'+b;
		}
		else a='0'+a;
	}
}
