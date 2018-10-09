#include<iostream>
#include<algorithm>
int c;
using namespace std;
int compare(int a, int b){
	if(a<b) return 0;
	return 1;
}
int TimKhoiLuongLonNhat(int w[], int n){
	int sum=0;
	for(int i=0; i<n; i++){
		sum+=w[i];
		if(sum>c){
			sum-=w[i];
			continue;
		}
		else if(sum==c){
			return sum;
		}
	}
	return sum;
}
int main()
{
	int n;
	cin>>c>>n;
	int w[n+5];
	for(int i=0; i<n; i++){
		cin>>w[i];
	}
	sort(w, w+n, compare);
	cout<<TimKhoiLuongLonNhat(w, n);	
}

