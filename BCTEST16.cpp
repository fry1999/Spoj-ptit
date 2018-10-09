#include<iostream>
#include<algorithm>
using namespace std;

int p, b;
void TimViTri(long long a[], int n, int b){
	for(int i=1; i<=n; i++){
    	cin>>a[i];
	}
	int begin=1, end=n;
	while(1){
	    p=(begin+end)/2;
		if(b==a[p]){
			break;
		}
		else if(b<a[p]){
			begin=0;
			end=p;
		}
		else {
			begin=p;
			end=n;
		}
	}
	
}
int main(){
	int n, count=0;
	cin>>n>>b;
	long long a[n+5], mp[n+5];
	TimViTri(a, n, b);
	int index=1;
	int vt;
	while(index<=n){
		vt=p;
		if((abs(vt-index+1))%2==0){
			vt=vt+1;
		}
		while(vt<=n){
			for(int i=index; i<=vt; i++){
		    	mp[i]=a[i];	
		    }
		    sort(mp+index, mp+vt);
	    	if(mp[(index+vt)/2]==b) ++count;
			vt+=2;
    	}
		++index;
	}
	vt=p+2;
	while(vt<=n){
		for(int i=p; i<=vt; i++){
			mp[i]=a[i];
		}
		sort(mp+p, mp+vt);
		if(mp[(p+vt)/2]== b) ++count;
		vt+=2;
	}
	cout<<count;
}
