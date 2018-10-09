#include<iostream>
#include<algorithm>
using namespace std;

struct THONGTIN{
	string ten;
	int ngay;
	int thang;
	int nam;
};

int cmp(THONGTIN a, THONGTIN b){
	if(a.nam<b.nam) return 0;
	else if(a.nam == b.nam){
		if(b.thang > a.thang) return 0;
		else if(b.thang==a.thang) {
			if(b.ngay>a.ngay) return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	THONGTIN thongtin[n+2];
	for(int i=0; i<n; i++){
		cin>>thongtin[i].ten>>thongtin[i].ngay>>thongtin[i].thang>>thongtin[i].nam;
	}
	sort(thongtin, thongtin+n, cmp);
	cout<<thongtin[0].ten<<"\n"<<thongtin[n-1].ten;
}
