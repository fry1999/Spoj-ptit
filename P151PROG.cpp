#include<iostream>
using namespace std;
long long A, B;
long long timChenhLechChieuCao(long long h[], long long N){
	long long max=h[A], min=h[A];
	for(long long i=A; i<=B; i++){
		if(h[i]>max) max=h[i];
		if(h[i]<min) min=h[i];
	}
	return max-min;
}
int main(){
	long long N, Q;
	cin>>N>>Q;
	long long h[N+5], answer[N+5];
	for(long long i=1; i<=N; i++){
		cin>>h[i];
	}
	for(long long i=1; i<=Q; i++){
		cin>>A>>B;
		answer[i]=timChenhLechChieuCao(h, N);
	}
	for(long long i=1; i<=Q; i++) {
		cout<<answer[i];
    }
}
