#include<iostream>
#include<string.h>
using namespace std;

void inBang(string a, string b){
	
	string answer[b.size()][a.size()];
	long vt1, vt2;
	for(long i=0; i<a.size(); ++i){
		bool flag = true;
		for(long j=0; j<b.size(); ++j){
			if(a[i]==b[j]){
				vt1=i;
				vt2=j;
				flag = false;
				break;
			}
		}
		if(flag == false) break;
	}
	
	for(long i=0; i<b.size(); ++i){
		if(i==vt2) {
			for(int p=0; p<a.size(); ++p){
				answer[i][p]= a[p];
			}
			continue;
		}
		for(long j=0; j<a.size(); ++j){
			if(j==vt1) answer[i][j]= b[i];
			else answer[i][j]='.';
		}
	}
	for(long i=0; i<b.size(); ++i){
		for(long j=0 ; j< a.size(); ++j){
			cout<<answer[i][j];
		}
		cout<<endl;
	}
}
int main(){
	string a, b;
	cin>>a>>b;
	inBang(a,b);
}
