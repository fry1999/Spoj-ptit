#include<iostream>
#include<algorithm>
using namespace std;
struct stock
{
	long day;
	long cost;
	
};
int cmp1(stock a, stock b)
{
	if(a.cost>b.cost) return 0;
	if(a.cost==b.cost)
	{
		if(a.day>b.day)
		return 0;
	}
	return 1;
}
int cmp2(stock a, stock b)
{
	if(a.day>b.day) return 0;
	return 1;
}
int cmp3(stock a, stock b)
{
	if(a.day<b.day) return 0;
	return 1;
}
int main()
{
	int test=0, k1, k2;
	while(1)
	{
		++test;
		long long n;
		cin>>n>>k1>>k2;
		if(n==0) return 0;
		stock st[n];
		for(int i=0; i<n; i++)
		{
			cin>>st[i].cost;
			st[i].day=i+1;
		}
		sort(st, st+n, cmp1);
		sort(st, st+k1, cmp2);
		cout<<"Case "<<test<<endl;
		for(int i=0; i<k1; i++)
		{
			cout<<st[i].day<<" ";
		}
		cout<<endl;
		sort(st+(n-k2), st+n, cmp3);
		for(int i=n-k2; i<n; i++)
		{
			cout<<st[i].day<<" ";
		}
		cout<<endl;
	}
}
