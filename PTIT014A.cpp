#include<iostream>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	cin.ignore();
	while(t--){
		getline(cin, s);
		if(s=="dung") cout<<"2";
		else if(s=="lon hon") cout<<"1";
		else if(s=="nho hon")cout<<"3";
		cout<<endl;
	}
}
