#include<iostream>
using namespace std;
int main(){
	long long n, floor=1, NCube=0;
	cin>>n;
	while(n>=0){
		NCube+=floor;
		n-=NCube;
		++floor;
	}
	cout<<floor-2;
}

