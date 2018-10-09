#include<iostream>
using namespace std;
int main(){
	int N, L, time=0, R, G;
	cin>>N>>L;
	int D[N];
	D[0]=0;
	for(int i=1; i<=N; i++){
		cin>>D[i]>>R>>G;
		time=time+(D[i]-D[i-1]);
		int p;
		p=1;
		while(1){
			if((p*R+(p-1)*G)>time){
				time=p*R+(p-1)*L;
				break;
			}
			else if(time>=p*R+(p-1)*G&&time<=p*R+p*G){
				break;
			}
			p++;
		}
	}
	time+=L-D[N];
	printf("%d", time);
}
