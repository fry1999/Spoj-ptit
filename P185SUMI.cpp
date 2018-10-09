#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	long long n;
	while(T--){
		cin>>n;
		long long a= sqrt(n);
		for(long long i=a; i>=1; --i){
			if(n % (i*i) == 0){
				cout<<i<<" "<<n/(i*i)<<endl;
				break;
			}
		}
	}
}
