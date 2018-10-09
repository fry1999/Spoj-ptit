#include<iostream>
using namespace std;
long double b[100];
int main()
{
	while(1)
	{
	 long double max=0, x;
		int m, n;
    	cin>>m>>n;
    	if(m==0&&n==0) return 0;
    	for(int i=1; i<=m; i++)
    	{
    		cin>>b[i];
    		if(max<b[i]) max=b[i];
    		if(max<-b[i]) max=-b[i];
    	}
    	long double F=max;
    	for(int i=2; i<=n; i++)
    	{
    		max=0;
    		for(int j=1; j<=m; j++)
    		{
    			cin>>x;
    			b[j]=b[j]*x/F;
				if(max<x) max=x;
				if(max<-x) max=-x;	
			}
			F=max;
		}
		int vt=1;
    	for(int i=2; i<=m; i++){
    		if(b[i]>=b[vt]){
    			b[vt]=b[i];
			}
		}
		cout<<vt<<endl;
	}
}
