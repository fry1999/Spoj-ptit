#include<iostream>
using namespace std;
#include<math.h>
long long timsouoc(long long s)
{
	long long uoc=0;
	for(long long i=1; i<=sqrt(s); i++)
	{
		if(s%i==0)
		{
			if(i*i==s)
			{
				uoc+=1;
			}
			else
			{
				uoc+=2;
			}
		}
	}
	return uoc;
}
int main()
{
	long long a, b, c, sum=0;
	cin>>a>>b>>c;
	for(long long i=1; i<=a; i++)
	{
		for(long long j=1; j<=b; j++)
		{
			for(long long k=1; k<=c; k++)
			{
				 sum+=timsouoc(i*j*k);
			}
		}
	}
	cout<<sum;
}
