#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> arr;
	long long n, k;
	cin>>n>>k;
	for(long long i=1; i<=k; i++)
	{
		long long du=n%i;
		arr.push_back(du);
		for(long long j=0; j<arr.size()-1; j++)
		{
			if(arr[j]==du)
			{
				cout<<"No";
				return 0;
			}
		}
		
	}
	cout<<"Yes";
	return 0;
}
