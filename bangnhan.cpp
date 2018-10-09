#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n, x, dem=0;
	cin>>n>>x;
	for(long long i=1; i<=sqrt(x); i++){
		if(x%i==0&&i<=n&&(x/i)<=n){
			if(i*i==n){
				dem+=1;
			}
			else dem+=2;
		}
	}
	cout<<dem;
}
