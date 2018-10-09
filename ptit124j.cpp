#include<iostream>
#include<math.h>
using namespace std;

void chuyenCoSo10Sang8(int a){
	if(a!=0) {
	    chuyenCoSo10Sang8(a/8);
     	cout<<a%8;
     }
}
void chuyenCoSo(string s){
	int coSoMuoi=0;
	int n=s.size();
	for(int i=0; i<n; i++){
		coSoMuoi+=(s[i]-'0')*pow(2,n-i-1 );
	}
	chuyenCoSo10Sang8(coSoMuoi);
}
int main(){
	string s;
	cin>>s;
	chuyenCoSo(s);
}
