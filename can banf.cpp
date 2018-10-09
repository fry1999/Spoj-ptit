#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x[100], y[100], m[100], dem=0;
	float a, b;
	while(true)
	{
		cin>>n;
		if(n<0) return 0;
		++dem;
    	for(int i=0; i<n; i++)
    	{
	    	cin>>x[i]>>y[i]>>m[i];
    	}
    	int temp1=0, temp2=0, temp3=0;
    	for(int i=0; i<n; i++)
    	{
    		temp1+=m[i]*x[i];
    		temp2+=m[i]*y[i];
    		temp3+=m[i];
		}
		a=(float)temp1/temp3;
		b=(float)temp2/temp3;
		cout<<"Case "<<dem<<": ";
		printf("%.2f %.2f\n", a, b);
	}
	
}
