#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	long long sosomayman=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		sosomayman+=pow(2, i);
	}
	cout<<sosomayman;
}
