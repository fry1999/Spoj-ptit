#include<iostream>
#include<math.h>
using namespace std;
int kiemTra(int n){
	if(n<2) return 0;
	for(int p=2; p<=sqrt(n); ++p){
		if(n%p==0) return 0;
	}
	return 1;
}
int main(){
	for(int i=1000; i<10000; ++i){
		if(kiemTra(i)) cout<<i<<"\t";
	}
}
