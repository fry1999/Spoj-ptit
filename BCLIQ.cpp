#include<iostream>
int answer[10001];
using namespace std;
void timDayConTangDaiNhat(int a[], int N){
	for(int i=1; i<=N; i++){
		bool flag=true;
		for(int j=1; j<i; j++){
			if(a[i]>a[j]&& answer[i]<=answer[j]){
				flag=false;
				answer[i]=answer[j]+1;
			}
		}
		if(flag==true) answer[i]=1;
	}
	int max=1;
	for(int i=1; i<=N; i++){
		if(answer[i]>max) max=answer[i];
	}
	cout<<max;
}
int main(){
	int N;
	cin>>N;
	int a[N+5];
	for(int i=1; i<=N; i++){
		cin>>a[i];
	}
	for(int i=1; i<=N; i++) answer[i]=0;
	timDayConTangDaiNhat(a, N);
}
