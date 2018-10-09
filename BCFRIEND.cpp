#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

long makeFriends(long long n, long long b, vector<long long> arr){
	unordered_map <long long, long long> umap;
	long d=0;
	sort(arr.begin(), arr.end());
	for(long long i=0; i<n; ++i){
		umap[arr[i]]=b-arr[i];
	}
	for(long long i=0; i<n-1; ++i){
		for(long long j=i+1; j<n; ++j){
			if(umap[arr[i]]==arr[j]) ++d;
		}
	}
	return d;
}
int main(){
	long long n, b, s;
	cin>>n>>b;
	vector <long long> arr;
	for(long long i=0; i<n; ++i){
		cin>>s;
		arr.push_back(s);
	}
	cout<<makeFriends(n, b, arr);
}
