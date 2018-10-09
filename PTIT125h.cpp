#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long n, dem=1;
	cin>>n;
	string s;
	cin>>s;
	for(long long i=0; i<n; i++){
		dem++;
		if(s[i]=='L'){
			i++;
		}
   }
   cout<<min(dem, n);
}
