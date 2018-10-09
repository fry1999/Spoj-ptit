#include<iostream>
#include<vector>
using namespace std;
vector<int> arr;
int main()
{
	long long so;
	long long b[1000]={};
	vector<int> arr;	
	long long N, C;
	cin>>N>>C;
	for(int i=0; i<N; i++)
	{
		bool flag=true;
		cin>>so;
		for(int j=0; j<arr.size(); j++)
		{
			if(arr[j]==so)
			{
				flag=false;
				b[j]+=1;
			}
		}
		if(flag==true)
		{
			arr.push_back(so);
		}
	}
	for(int i=0;i<arr.size()-1; i++)
	{
		for(int j=i+1; j<arr.size(); j++)
		{
			if(b[j]>b[i])
			{
				long long temp1=arr[j];
				long long temp2=b[j];
				for(int k=j; k>i; k--)
				{
					arr[k]=arr[k-1];
					b[k]=b[k-1];
				}
				arr[i]=temp1;
				b[i]=temp2;
			}
		}
	}
	for(int i=0; i<arr.size(); i++)
	{
		for(int j=0; j<=b[i]; j++)
		{
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
