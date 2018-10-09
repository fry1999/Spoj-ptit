#include<iostream>
#include<algorithm>
long d;
int soDoiToiDa(long m, long n, long k){
	long thua = m - d*2 + n-d;
	while(thua < k){
		thua+=3;
		d--;
	}
	return d;
}
using namespace std;
int main(){
	long m, n, k;
	cin>>m>>n>>k;
	d= min(m/2, n);
	cout<<soDoiToiDa(m, n, k);

}
