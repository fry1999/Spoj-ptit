#include<iostream>
#include<algorithm>
using namespace std;
long long binarySearch(long long *a, long long n, long long x){
	long long low=0, high=n-1, ans=-1;
	while(low<=high){
		long long middle=(low+high)/2;
		if(a[middle]<=x){
			ans=middle;
			low=middle+1;
		}
		else{
			high=middle-1;
		}
	}
	return ans;
}
int main(){
	long long n, m;
	cin>>n>>m;
	long long a[n], x;
	for(long long i=0; i<n; i++){
		cin>>a[i];
	}
	for(long long i=0; i<m; i++){
		cin>>x;
		long long vt=binarySearch(a, n, x);
		if(vt==-1) cout<<"0"<<endl;
		else cout<<vt+1<<endl;
	}
	return 0;
	
}
