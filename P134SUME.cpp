#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[5];
	for(int i=0; i<4; ++i){
		cin>>a[i];
	}
	sort(a, a+4);
	cout<<a[0]*a[2];
	
}
