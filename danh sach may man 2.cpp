#include<iostream>
#include<math.h>
using namespace std;
long long n, m;
long long x[1000];
int main()
{
	long long botest;
	cin>>botest;
	for(int t=0; t<botest; t++)
	{
		long long dem=1;
	    cin>>n>>m;
    	for(long long i=1; i<=n; i++)
    	{
	     	x[i]=pow(2, i-1);
    	}
    	long long i=n;
    	long long a=1;
    	while(i>0)
    	{
    		while(x[i]<m)
	    	{
	    		a=1;
		    	x[i]=x[i]+1;
		    	for(int j=i+1; j<=n; j++)
		    	{
		    		x[j]=x[j-1]*2;
		    	}
		    	if(x[n]>m)
		    	{
		    	   a=0;
		    	}
		    	if(a==1)
		    	++dem;
		    	i=n;
	    	}
	    	i--;
    	}
    	cout<<"Data set "<<t+1<<" "<<n<<" "<<m<<" "<<dem<<endl;
    }
}
