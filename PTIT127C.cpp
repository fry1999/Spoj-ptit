#include<iostream>
#include<algorithm>
using namespace std;

struct TIME{
	int s;
	int f;
};
int cmp(TIME a, TIME b){
	if(a.s > b.s) return 0;
	if(a.s== b.s ){
		if(a.f > b.f) return 0;
	}
	return 1;
}
int number_Of_Room(TIME t[], int n){
	sort(t, t+n, cmp);
	int d=0, kq=0;
	for(int i=0; i<n-1; ++i){
		d=1;
		int temp=t[i].f;
		for(int j=i+1; j<n; j++){
			if(t[j].s >= temp){
				++d;
				temp=t[j].f;
			}
		}
		if(kq < d) kq=d;
	}
	return kq;
}
int main()
{
	long n;
	cin>>n;
	TIME t[n+1];
	for(long i=0; i<n; i++){
		cin>>t[i].s>>t[i].f;
	}
	cout<<number_Of_Room(t, n);
}
