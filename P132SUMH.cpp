#include<iostream>
using namespace std;
int main(){
	long long a, b, c, d, p;
	cin>>a>>b>>c>>d;
	for(int i=1; i<=3; ++i){
		int dem=0;
		cin>>p;
		if(p% (a+b) <= a && p%(a+b) >0) ++dem;
		if(p%(c + d) <=c && p %(c+d) >0) ++dem;
		if(dem == 0) cout<<"none"<<endl;
		else if(dem ==1) cout<<"one"<<endl;
		else cout<<"both"<<endl;
	}
}
