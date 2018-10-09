#include<iostream>
using namespace std;
int Xulixau(string a, string b)
{
	while(true)
	{
		if(a.length()==b.length()) break;
		if(a.length()>b.length()) b='0'+b;
		else a='0'+a;
	}
	for(int i=0; i<a.length(); i++)
	{
		if((a[i]-'0')>(b[i]-'0')) return 1;
		else if((a[i]-'0'<(b[i]-'0')))return -1;
	}
	return 0;
}
string Chuanhoaxau(string a)
{
	string b="";
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]!='0')
		{
			for(int j=i; j<a.length(); j++)
			{
				b+=a[j];
			}
			return b;
		}
	}
	b="0";
}
int main()
{
	int stt=0;
	int N;
	while(1)
	{
		stt++;
		int kt=0;
		cin>>N;
		if(N==0) return 0;
		string a;
		string max="", min="";
		for(int i=0; i<N; i++)
		{
			cin>>a;
			if(i==0)
			{
				min=a;
				max=a;
			}
			else
			{
				if(Xulixau(a, max)==1)
				{
					max=a; kt=1;
				}
				if(Xulixau(a, min)==-1)
				{
					min=a; kt=1;
				}
			}
		}
		if(kt==1) cout<<"Case "<<stt<<":"<<Chuanhoaxau(min)<<" "<<Chuanhoaxau(max)<<endl;
		else cout<<"Case "<<stt<<":"<<"There is a row of trees having equal height"<<endl;
	}
}
