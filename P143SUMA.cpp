#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool getCertificate(vector <pair<int, int>> vect, long s){
	sort(vect.begin(), vect.end());
	for(int i=0; i< vect.size(); ++i){
		if(s <= vect[i].first) return false;
		s+=vect[i].second;
	}
	return true;
}
int main(){
	vector <pair<int, int>> vect;
	long s, n, x, y;
	cin>>s>>n;
	for(long i=0; i<n; ++i){
		cin>>x>>y;
		vect.push_back(make_pair(x, y));
	}
	if(getCertificate(vect,s)) cout<<"YES";
	else cout<<"NO";
}
