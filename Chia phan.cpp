#include<iostream>
using namespace std;
int BCNN(int n, int m)
{
	int a=m, b=n;
	while(b!=0)
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return n*m/a;
}
int main()
{
	int m, n, cout_cut=0;
	cin>>n>>m;
	int phanlay=BCNN(m,n)/m;
	int phanchia=BCNN(m,n)/n;
	int s=0;
	for(int i=1; i<=m; i++)
	{
		while(s<phanlay)
    	{
     		s+=phanchia;
     	}
    	if(s==phanlay) s=0;
    	else
    	{
     		s-=phanlay;
    		cout_cut++;
    	}
	}
	cout<<cout_cut;
}
