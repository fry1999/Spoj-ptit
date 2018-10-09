#include<iostream>
#include<string>
using namespace std;

string soLon, soBe;
int n;
void xuLiXau(){
	while(a.size()!=b.size()){
		if(a.size() > b.size()) b='0'+b;
		else a='0'+a;
	}
}
void tinhTong(string a, string b){
	n=a.size();
	long long nho =0;
	for(long long i=0; i<n; i++){
		answer[n-i-1]=(a[n-i-1]-'0')+(b[n-i-1]-'0')+nho;
		if((n-i-1)!=0){
			nho=answer[n-i-1]/10;
			answer[n-i-1]=answer[n-i-1]%10;
		}
	}
	for(long long i=0; i<n; i++){
		cout<<answer[i];	
	}
}
void soSanh(){
	for(long long i=0; i<n; i++){
		if((a[i]-'0')>(b[i]-'0')){
			soLon=a;
			soBe=b;
			break;
		}
		else if((a[i]-'0')<(b[i]-'0')){
			soLon=b;
			soBe=a;
			break;
		}
	}
}
void tinhHieu(){
	int nho=0;
	for(int i=0; i<n; i++)
	{
		answer[n-i-1]=(soLon[n-i-1]-'0')-(soBe[n-i-1])-'0')-nho;
		if(answer[n-i-1]<0){
			answer[n-i-1]=10+(soLon[n-i-1]-'0')-(soBe[n-1-1]-'0');
			nho=1;
		}
	}
	for(int i=0; i<n; i++){
		cout<<answer[i];
	}
}
void tinhTich(){
	long long nho=0;
	for(long long i=0; i<n; i++){
		string c= 
		for(long long j=0; j<n; j++){
			
		}
		answer[n-i-1]=(a[n-i-1]-'0')*(b[n-i-1]-'0');
		if(i!=0){
			nho=answer[n-i-1]/10;
			answer[n-i-1]=
		}
	}
}
int main(){
	string a, b;
	cin>>a>>b;
	long long answer[1000010];
	xuLiXau();
	tinhTong();
	soSanh();
	tinhHieu();
	
}
