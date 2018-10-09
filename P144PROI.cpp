#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	long long l, r, min, max;
	vector <pair<long long, long long>> vect;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>l>>r;
		vect.push_back(make_pair(l,r));
		if(i==0){
			min= l;
			max=r;
		}
		if(l < min) min=l;
		if(r> max) max=r;
	}
	for(int i=0; i<n ; ++i){
		if(vect[i].first==min && vect[i].second==max) {
			cout<<i+1;
			return 0;
		}
	}
	cout<<"-1";
}
