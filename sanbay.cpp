#include<iostream>
using namespace std;
long long a[1000];
long long n, m;
void tienmax()
{
	long long temp=n;
	long long money=0, t;
	while(temp>0)
	{
		long long max=a[0];
		for(long long i=0; i<m; i++)
    	{
	    	if(a[i]>max)
			{
				max=a[i];
				t=i;
			}
    	}
    	--a[t];
    	money+=max;
    	--temp;
	}
	cout<<money<<" ";
	
}
void tienmin()
{
	long long temp=n;
	long long money=0, t;
	while(temp>0)
	{
		long long min=10000;
		for(long long i=0; i<m; i++)
    	{
	    	if(a[i]<=min&&a[i]>=1)
			{
				min=a[i];
				t=i;
			}
    	}
    	--a[t];
    	money+=min;
    	--temp;
	}
	cout<<money;
	
}
int main()
{
	cin>>n>>m;
	for(long long i=0; i<m; i++)
	{
		cin>>a[i];
	}
	tienmax();
	tienmin();
	return 0;
}
