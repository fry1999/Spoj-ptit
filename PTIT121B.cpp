#include<iostream>
#include<vector>
using namespace std;
void generateGrayArr(int n){
	if(n<=0) return;
	vector <string> arr;
	arr.push_back("0");
	arr.push_back("1");
	for(int i=2; i< (1<<n); i= i<<1){
		for(int j=i-1; j >=0; --j)
		arr.push_back(arr[j]);
		for(int j=0; j<i; ++j){
			arr[j]= "0"+arr[j];
		}
		for(int j=i; j<2*i; ++j){
			arr[j]= "1"+arr[j];
		}
	}
	for(int i=0; i<arr.size(); ++i){
		cout<<arr[i]<<"\n";
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	generateGrayArr(n);	
}
