#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n];
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	long long min=a[0], vtmin=0;
	for(int i=0; i<n; i++){
		if(a[i]<min){
			min=a[i];
			vtmin=i;
		}
	}
	bool flag=true;
	for(long long i=vtmin+1; i<n; i++){
		if(a[i]<a[i-1]){
			flag=false;
		}
	}
	for(long long i=1; i<vtmin; i++){
		if(a[i]<a[i-1]){
			flag=false;
		}
	}
	if(flag==true){
		if(vtmin==0){
			cout<<"0";
		}
		else if(a[n-1]>a[0]){
			cout<<-1;
		}
		else{
			cout<<n-vtmin;
		}
	}
	else{
		cout<<-1;
	}
}
