#include<iostream>
#include<algorithm>
using namespace std;

long CalculateSum(int begin, int end){
	long T, x, sum=0, temp;
	cin>>T;
	for(int i=0; i<T; i++){
		cin>>x;
		if(x>=begin &&x<=end){
			continue;
		}
		else {
			temp=min(abs(x-begin), abs(x-end));
			sum+=temp;
			if(x>end){
				begin= begin+temp;
				end= end+ temp;
			}
			else {
				begin= begin-temp;
				end= end-temp;
			}
		}
	}
	return sum;
}
int main(){
	long n, m, begin, end;
	cin>>n>>m;
	begin= 1; end= m;
	cout<<CalculateSum(begin, end);
	
}
