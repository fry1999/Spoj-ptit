#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	int d=max(b-a, c-b);
	cout<<d-1;
}
