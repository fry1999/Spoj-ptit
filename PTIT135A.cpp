#include<iostream>
using namespace std;

int main(){
	int count[101]={};
	int max=0;
	long m=0;
	int a, b , c;
	int begin, end;
	cin>>a>>b>>c;
	int price[]={0, a, b, c};
	for(int i=1; i<=3; ++i){
		cin>>begin>>end;
		if(end> max) max=end;
		for(int j=begin; j<end; ++j){
			++count[j];
		}
	}
	for(int i=0; i< max; ++i){
		m = m + count[i]*price[count[i]];
	}
	cout<<m;
	
}
