#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T;
	cin>>T;
	cin.ignore();
	for(int i=0; i<T; i++){
		string a;
		long long sum=0;
		long long arr[256]={};
		getline(cin,a);
		for(long long i=0; i<a.size(); i++){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}
			arr[a[i]]+=1;
		}
		for(long long i=0; i<a.size(); i++){
			if(arr[a[i]]>1&&a[i]!=' '){
				sum+=arr[a[i]];
				arr[a[i]]=1;
			}
		}
		cout<<sum<<" ";
		for(int i=0; i<a.size(); i++){
			if(arr[a[i]]>0&&a[i]!=' '){
				cout<<a[i];
				arr[a[i]]=0;
			}
		}
		cout<<endl;
	}
}

