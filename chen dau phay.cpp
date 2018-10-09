#include<iostream>
using namespace std;
int main()
{
	string s, res="";
	cin>>s;
	while(s.length()%3!=0)
	{
		s='0'+s;
	}
	int i=0;
	while(i<s.length())
	{
		res=res+","+s.substr(i, 3);
		i+=3;
	}
	i=0;
	while(res[i]=='0'||res[i]==',') ++i;
	while(i<res.length())
	{
		cout<<res[i];
		++i;
	}
}
