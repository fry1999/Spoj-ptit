#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n, m;
	cin>>n>>m;
	long long a[n], b[m];
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	for(long long i=0; i<m; i++){
		cin>>b[i];
	}
	sort(a, a+n);
	for(long long i=0; i<m; i++){
		bool flag=true;
		for(long long j=0; j<n; j++){
			if(a[j]>b[i]){
				flag=false;
				b[i]=j;
				break;
			}
		}
		if(flag==true) b[i]=n;
	}
	for(long long i=0; i<m; i++){
		cout<<b[i]<<endl;
	}
	
}
