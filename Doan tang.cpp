#include<iostream>
using namespace std;
int main()
{
	long long n, a[10000], l[10000];
	cin>>n;
	for(long long i=0; i<n; i++)
	{
		cin>>a[i];
	}
	l[0]=1;
	for(long long i=1; i<n; i++)
	{
		long long lmin=0;
		if(a[i]>=a[i-1]) l[i]=l[i-1]+1;
		else
		l[i]=lmin+1;
	}
	long long maximun=l[0];
	for(long long i=1; i<n; i++)
	{
		if(l[i]>maximun) maximun=l[i];
	}
	cout<<maximun;
}
