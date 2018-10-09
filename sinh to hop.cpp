#include<iostream>
using namespace std;
long long n, k;
long long x[1000];
void printf()
{
	for(long long i=1; i<=k; i++)
	{
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
int main()
{
     cin>>n>>k;
	 for(long long i=1; i<=k; i++)
	 {
	 	x[i]=i;
	 	cout<<x[i]<<" ";
	 }
	 cout<<endl;
	 long long i=k;
	 while(i>0)
	 {
    	 while(x[i]!=n-k+i)
    	 {
    	 	x[i]=x[i]+1;
    	 	for(long long j=i+1; j<=k; j++)
    	 	{
    	 		x[j]=x[j-1]+1;
     		 }
    	 	printf();
    	 	i=k;
    	 }
    	 i--;
     }
	 
}
