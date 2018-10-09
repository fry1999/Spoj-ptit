	#include<iostream>
	using namespace std;
	long long N, C, dem=0, b[1000];
	long long a[1000], t=0;
	void input()
	{
		cin>>N>>C;
		for(long long i=0; i<N; i++)
		{
			cin>>a[i];
		}
	}
	void hoandoi()
	{
		for(long long i=0; i<N; i+=dem)
		{
		    dem=1;
			for(long long j=i+1; j<N; j++)
			{
				if(a[j]==a[i])
				{
					dem++;
					long long temp=a[j];
					for(long long s=j; s>i; s--)
					{
						a[s]=a[s-1];
					}
					a[i]=temp;
				}
			}
			b[t++]=dem;
		}
	}
	void output()
	{
		for(long long i=0 ;i<N; i++)
		{
			if(a[i]<=C) cout<<a[i]<<" ";
			
	    }
	   
	}
	int main()
	{
		input();
		hoandoi();
		output();
	}
