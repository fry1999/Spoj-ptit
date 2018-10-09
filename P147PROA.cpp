#include<iostream>
#include<math.h>
using namespace std;

long long tongCacCanh(long long s1, long long s2, long long s3){
	long long a, b, c;
	long long v=sqrt(s1*s2*s3);
	a= v / s3;
	b= v /s2;
	c= v /s1;
	return 4*(a+b+c);
}
int main(){
	long long s1, s2, s3;
	cin>>s1>>s2>>s3;
	cout<<tongCacCanh(s1, s2, s3);
}
