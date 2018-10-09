#include<iostream>
using namespace std;

long long p[10000], q[10000];
int main()
{
	long long x, y, a, b, dem=0;
	cin>>x>>y>>a>>b;
	for(long long i=max(a,b+1); i<=x; i++)
	{
		for(long long j=b; j<=y&&j<i; j++)
		{
			p[dem]=i;
			q[dem]=j;
			dem+=1;
		}
	}
	cout<<dem<<endl;
	for(long long i=0; i<dem; i++)
	{
		cout<<p[i]<<" "<<q[i]<<endl;
	}
}
