#include<iostream>
#include<algorithm>
using namespace std;

long long k;
long long binarySearch(long long arr2[], long long begin, long long end, long long d){
	if(end>=begin){
		long long count=0;
		long long mid=begin+(end-begin)/2;
		if(arr2[mid]==d){
			count++;
			long i=1;
			while(arr2[mid+i]==d && mid+i <=end){
				count++;
				i++;
			}
			i=1;
			while(arr2[mid-i]==d && mid-i>=begin){
		     	count++;
				i++;
			}
			return count;
		}
		if(arr2[mid] > d) return binarySearch(arr2, begin, mid-1, d);
    	return binarySearch(arr2, mid+1, end, d);
	}
	return 0;
}
int main(){
	long long n, m, dem=0;
	cin>>n>>m>>k;
	long long arr1[n+1];
	long long arr2[m+1];
	for(long long i=0; i<n; ++i) cin>>arr1[i];
	for(long long i=0; i<m; ++i) cin>>arr2[i];
	if(k==0){
		long long d1=0, d2=0;
		for(auto x: arr1){
			if(x==0) d1++;
		}
		for(auto x: arr2){
			if(x==0) d2++;
		}
		cout<<d1*m + d2*n - d1*d2;
		return 0;
	}
	sort(arr2, arr2+m);
	for(long long i=0; i<n; ++i){
		if(arr1[i]!=0 && k % arr1[i]==0){
			long long d=k/arr1[i];
			dem+=binarySearch(arr2, 0, m-1, d);
		}
	}
	cout<<dem;
}
