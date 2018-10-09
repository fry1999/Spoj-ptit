/* I sort the elments from max value to min value.
m element is decreased to 0 or negative by subtract the distance between 2 elements nearly.
Then a return answer.
*/



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long cutWood(vector<long long> arr, long long n, long long m){
	long long p=arr[0], i=0;
	for(auto x: arr){
		m-=(p-x)*i;
		if(m<=0) return x + (m*-1)/i;
		p=x; ++i;
	}
}
int main(){
	long long n, m, a;
	vector<long long> arr;
	cin>>n>>m;
	for(long long i=0; i<n; ++i){
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end(), greater<long long >());
	cout<<cutWood(arr, n, m);
}
