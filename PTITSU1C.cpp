#include<iostream>
using namespace std;
void ba_Vong_For(int a[],long N, long M){
	long sum=0, max=0;
	for(long i=0; i<N-2; i++){
		for(long j=i+1; j<N-1; j++){
			for(long k=j+1; k<N; k++){
				sum=a[i]+a[j]+a[k];
			}
			if(sum > max && sum<=M) max=sum;
		}
	}
	cout<<max<<endl;
	
}
int main(){
	int T, a[100001];
	cin>>T;
	for(int t=0; t<T; t++){
		long N, M;
		cin>>N>>M;
		for(long i=0; i<N; i++){
			cin>>a[i];
		}
		ba_Vong_For(a,N, M);
	}
}
