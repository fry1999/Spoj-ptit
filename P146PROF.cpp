#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string typeTriangle(vector<int> vect){
	sort(vect.begin(),  vect.end());
	if(vect[0]+vect[1]< vect[3]){
		if(vect[0]+vect[1]+vect[2] > vect[3]+1) return "TRIANGLE";
		else if(vect[0]+vect[1]+vect[2]==vect[3]+1) return "SEGMENT";
		else return "IMPOSSIBLE";
	}
	else if(vect[0]+vect[1]==vect[3]) return "TRIANGLE";
	else {
		if(vect[2] + vect[3] > vect[0]+vect[1]+1) return "TRIANGLE";
		else return "SEGMENT";
	}
}
int main(){
	vector <int> vect;
	int a;
	for(int i=0; i<4; ++i){
		cin>>a;
		vect.push_back(a);
	}
	cout<<typeTriangle(vect);
}
