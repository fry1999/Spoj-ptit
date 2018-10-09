#include<iostream>
using namespace std;
int main()
{
	long long a, b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a-1<<" "<<b;
	}
	else cout<<b-1<<" "<<a;
	return 0;
}
