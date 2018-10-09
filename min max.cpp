#include<iostream>
using namespace std;
int main()
{
	long long m, s, a[100];
	cin>>m>>s;
	if(m==1&&s==0)
	{
		cout<<0<<" "<<0;
		return 0;
	}
	if(s==0||s>9*m)
	{
		cout<<"-1 -1"; return 0;
	}
	for(int i=0; i<m; i++)
	{
		if(s>9){
			a[i]=9;
			s-=9;
		}
		else{
			a[i]=s;
			s=0;
		}
	}
	long long b[m];
	for(int i=0; i<m; i++)
	{
		b[i]=a[i];
	}
	if(a[m-1]==0)
	{
		a[m-1]=1;
		for(int i=m-2; i>=0; i--)
		{
			if(a[i]!=0)
			{
				a[i]-=1;
				break;
			}
		}
	}
	for(int i=0; i<m; i++)
	{
		cout<<a[m-i-1];
	}
	cout<<" ";
	for(int i=0 ; i<m ; i++)
	{
		cout<<b[i];
	}
}
