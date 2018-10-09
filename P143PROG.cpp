#include<iostream>
using namespace std;
int main(){
	long n, k;
	cin>>n>>k;
	if(k%(n-1)==0){
		cout<<k+(k/(n-1)-1)<<" "<< k+ k/(n-1);
	}
	else cout<<k+(k/(n-1))<<" "<< k+ (k/(n-1));
}
