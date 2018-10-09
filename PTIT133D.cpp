#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int dem=0, i=0;
		long long n;
		string S;
		cin>>S;
		if(S=="[END]") return 0;
		if(S!="[CASE]") return 0;
		cin>>n;
		while(n){
			if(pow(4, i)>n){
				n=n-pow(4, i-1);
				i=-1;
				dem++;
			}
			i++;	
		}
		if(dem%2==0){
			printf("Hanako\n");
		}else{
			printf("Taro\n");
		}
		
	}
}
