#include<iostream>
using namespace std;
#include<math.h>
long long timuoc(long long s){
	long long sum=0;
	for(long long i=1; i<=sqrt(s); i++){
		if(s%i==0){
			if(i*i==s){
				sum+=1;
			}
			else sum+=2;
		}
	} 
	return sum;
}
int main(){
	int T;
	long long n;
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>n;
		cout<<timuoc(n*n)<<endl;
	}
}
