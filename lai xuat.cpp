#include<iostream>
using namespace std;
int main()
{
	int n,  year;
	double N, L, M;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>N>>L>>M;
		year=0;
		while(N-M<0)
     	{
	    	year++;
	    	N+=L/100*N;
    	}
    	cout<<year;
	}
}
