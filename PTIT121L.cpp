#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

struct KICHTHUOC{
	long cdai;
	long crong;
};

int cmp(KICHTHUOC a, KICHTHUOC b){
	if(b.cdai > a.cdai) return 0;
	return 1;
}
int main(){
	KICHTHUOC kt[3];
	long s=0;
	bool flag = true;
	for(int i=0; i<3; i++){
		cin>>kt[i].crong>>kt[i].cdai;
		if(kt[i].crong> kt[i].cdai) swap(kt[i].crong, kt[i].cdai);
		s+=kt[i].cdai*kt[i].crong;
	}
	long m= sqrt(s);
	sort(kt, kt+3, cmp);
	if(m*m != s) {
		cout<<"0"; return 0;
	}
	else{
	    if(kt[0].cdai==m){
	    	if(kt[1].cdai== kt[2].cdai==m){
	        	if(kt[0].crong+ kt[1].crong + kt[2].crong == m){
		        	cout<<m;
		        	return 0;
	        	}
	        }
    		else if(kt[1].crong == kt[2].crong){
			    	if(kt[1].cdai+ kt[2].cdai== m&& kt[0].crong+ kt[1].crong== m){
			    		cout<<m; return 0;
			    	}
			    }
			else if(kt[1].cdai == kt[2].cdai){
				if(kt[1].crong + kt[2].crong == m && kt[1].cdai+kt[0].crong ==m){
					cout<<m;
					return 0;
				}
			}
		}
		else{
			cout<<"0"; return 0;
		}
	}
}
