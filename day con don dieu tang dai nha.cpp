#include<iostream>
using namespace std;
int main()
{
	long long a[10000], l[10000];
	long long n;
	cin>>n; 
	for(long long i=0; i<n; i++)
	{
		cin>>a[i];
	}
	l[0]=1;
	for(long long i=1; i<n; i++)
	{
		long long lmax=0;
		for(long long j=0; j<i; j++)
		{
			if(a[j]<a[i])
			{
				if(l[j]>lmax) lmax=l[j];
			}
		}
		l[i]=lmax+1;
	}
	long long maximun=l[0];
	for(long long i=1; i<n; i++)
	{
		if(l[i]>maximun) maximun=l[i];
	}
	cout<<maximun;
	
	
	
}
