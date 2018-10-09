#include<iostream>
#include<string>
using namespace std;
int main(){
	long long x1=0, x2=0, y1=0, y2=0, sum=0;
	string a, b;
	long long c[100];
	cin>>a>>b;
	for(long long i=0; i<a.size(); i++){
		x1=x1*10+(a[i]-'0');
		if(a[i]!='0'){
			y1=y1*10+(a[i]-'0');
		}
	}
	for(long long i=0; i<b.size(); i++){
		x2=x2*10+(b[i]-'0');
		if(b[i]!='0'){
			y2=y2*10+(b[i]-'0');
		}
	}
	long long temp=x1+x2, dem=0;
	while(temp>0){
		int a=temp%10;
		temp/=10;
		if(a!=0) c[dem++]=a;
	}
	for(int i=dem-1; i>=0; i--){
		sum=sum*10+c[i];
	}
	if(sum==(y1+y2)) cout<<"YES";
	else cout<<"NO";
}
