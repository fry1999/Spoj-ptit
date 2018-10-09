#include<iostream>
using namespace std;

void traoBai(string s, long m, long k){
	int *card;
	card = new int [m + s.size()];
	for(int i=0; i<m; ++i){
		card[i]=i;
	}
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='A'){
			card[m+i]=card[i];
		}
		else if(s[i]=='B'){
			card[m+i]=card[i+1];
			card[i+1]=card[i];
		}
	}
	cout<<card[k+s.size()-2]<<" "<<card[k+s.size()-1]<<" "<<card[k + s.size()];
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "r", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long m, k;
	string s;
	cin>>m>>k;
	cin>>s;
	traoBai(s, m, k);
	
}
