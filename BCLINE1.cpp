#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long n, a, b, count=0;
	cin>>n>>a>>b;
	cout<<n- max(a+1, n-b)+1;
}
