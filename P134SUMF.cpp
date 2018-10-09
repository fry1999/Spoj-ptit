#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int soKhongBiGachBo(long n, long k){
	bool kiemTra[n+1];
	long d=0;
	memset(kiemTra, true, sizeof(kiemTra));
	for(long p=2; p<=n; p++){
		if(kiemTra[p]){
			for(long i=p; i<=n; i+=p){
				if(kiemTra[i]){
					kiemTra[i]=false;
		     		d++;
		    		if(d==k) return i;
				}
			}
		}
	}
	return 0;
}
int main(){
	long n, k;
	cin>>n>>k;
	cout<<soKhongBiGachBo(n, k);
}
