#include<iostream>
#include<cstdlib>
using namespace std;

long long soBuoc(long long a, long long b, long long c, long long d, long long dem){
	if(a==b &&a==c &&a==d) return dem;
	else{
		++dem;
		long long temp=a;
		a=abs(a-b);
		b=abs(b-c);
		c=abs(c-d);
		d=abs(d-temp);
		return soBuoc(a, b, c, d, dem);
	}
}
int main(){
	long long a, b, c, d;
	while(1){
		cin>>a>>b>>c>>d;
		if(a==b && a==c && a==d &&a==0) break;
		long long dem=0;
		cout<<soBuoc(a, b, c, d, dem)<<endl;
	}
	return 0;
	
}
