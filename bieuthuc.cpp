#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long sum1=0, sum2=0;
	long long n, k, a[100005];
	cin>>n>>k;
	for(long long i=0; i<n; i++)
	{
		cin>>a[i];
    }
    sort(a, n);
	for(long long i=1; i<n; i++)
	{
		if(i<=n-1-k) sum1+=a[i];
		else sum2+=a[i];
	}
	cout<<sum2-sum1+a[0];
}

