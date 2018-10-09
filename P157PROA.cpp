#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t, n, a;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[1001];
		memset(arr, 0, sizeof(arr));
		for(int i=0; i<n; ++i){
			cin>>a;
			if(a<1001)
			++arr[a];
		}
		int soMayMan=-1;
		int max=0;
		for(int i=0; i<1001; ++i){
			if(arr[i] > max){
				max=arr[i];
				soMayMan=i;
			}
		}
		cout<<soMayMan<<endl;
	}
}
