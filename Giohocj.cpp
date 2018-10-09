#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x, y, n;
	cin>>x>>y>>n;
	long long ans;
	switch(n%6){
		case 1:{ ans=x;
			break;
		}
		case 2:{ans=y;
			break;
		}
		case 3:{
			ans=y-x;
			break;
		}
		case 4:{
			ans=-x;
			break;
		}
		case 5:{
			ans=-y;
			break;
		}
		case 0:{
			ans=x-y;
			break;
		}
	}
	cout<<ans;
	
}
