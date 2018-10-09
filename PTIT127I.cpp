	#include<iostream>
	#include<string.h>
	using namespace std;
	int main(){
		long long n, x;
		bool veSo[200];
		while(1){
			cin>>n;
			if(n==0) break;
			memset(veSo, false, sizeof(veSo));
			for(int i=0; i<n; i++)
			{
				
		    	for(int j=0; j<6; j++){
			    	cin>>x;
			    	if(x>=1&&x<=49)
			    	veSo[x]=true;
		    	}
			}
			bool flag=true;
			for(int i=1; i<=49; i++){
				if(veSo[i]==false){
					cout<<"No\n";
					flag=false;
					break;
				}
			}
			if(flag==true) cout<<"Yes\n";
		}
		return 0;
	}
