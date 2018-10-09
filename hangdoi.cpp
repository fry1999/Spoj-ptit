#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int n, t, a[100], sum=0, dem=0;
		cin>>n>>t;
		for(int i=0; i<n; i++)
			cin>>a[i];
		while(sum<=t){
			sum+=a[dem++];
		}
		cout<<dem-1<<endl;
		--T;
	}
}
