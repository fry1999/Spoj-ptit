#include<iostream>
#include<algorithm>
using namespace std;
struct THOIGIAN{
	long long gio;
	long long phut;
	long long giay;
};
int cmp(THOIGIAN a, THOIGIAN b){
	if(a.gio > b.gio) return 0;
	else if(a.gio==b.gio){
		if(a.phut>b.phut) return 0;
		else if(a.phut==b.phut){
			if(a.giay>b.giay) return 0;
		}
	}
	return 1;
}
int main(){
	long long n;
	cin>>n;
	THOIGIAN tg[n+2];
	for(long long i=0; i<n; i++){
		cin>>tg[i].gio>>tg[i].phut>>tg[i].giay;
	}
	sort(tg, tg+n, cmp);
	for(int i=0; i<n; i++){
		cout<<tg[i].gio<<" "<<tg[i].phut<<" "<<tg[i].giay<<endl;
	}
}
