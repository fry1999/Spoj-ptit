#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, a;
	vector <pair<int, int>> vect;
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>a;
		vect.push_back(make_pair(a, i));
	}
	sort(vect.begin(), vect.end());
	for(auto x: vect) cout<<x.second<<" ";
}
