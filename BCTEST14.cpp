#include<iostream>
using namespace std;
int main(){
	long long A, B, V;
	long long time =0;
	cin>>A>>B>>V;
	if(A==V){
		cout<<time; return 0;
		}
	while(1){
		++time;
		V-=A;
		if(V<=0){
	        break;
		}
		V+=B;
	}
	return 0;
}
