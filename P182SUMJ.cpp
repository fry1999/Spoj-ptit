#include<iostream>
using namespace std;
int main(){
	long T;
	long long a, b, c, d;
	cin>>T;
	for(long t=0; t<T; t++){
		long long s=1, i=1, j=1;
		cin>>a>>b>>c>>d;
		if(a<c &&b< d){
	    	cout<<"<"<<endl;
			continue;
	   	}
	   	else if(a>c && b>d) {
	  		cout<<">"<<endl ; continue;
		}
		else if(a==c && b==d){
			cout<<"="<<endl;  continue;
		}
		int x=0, y=0;
		while(1){
			if(i<=b){
				s*=a;
				i++;
				if(i>b) x=1;
				if(y==1 && s>1) break;
			}
			if(j<=d){
				s/=c;
				j++;
				if(j>d) y=1;
				if(x==1 && s< 1) break;
			}
			if(x==1 && y==1) break;
		}
		if(s>1) cout<<">"<<endl;
		else if(s<1) cout<<"<"<<endl;
		else cout<<"="<<endl;
	}
}
