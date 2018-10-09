#include<iostream>
#include<vector>
using namespace std;

int hoanViChuSo(long x){
	vector<int > arr;
	long answer=0;
	int vt;
	while(x){
		arr.push_back(x%10);
		x/=10;
	}
	bool flag= true;
	for(int i=1; i<arr.size(); ++i){
		if(arr[i] < arr[i-1]){
			vt=i;
			flag= false;
			break;
		}
	}
	if(flag==true) {
		return answer;
	}
	for(int i=0; i<vt; i++){
		if(arr[i] > arr[vt]){
			arr[i]=arr[vt]+arr[i];
			arr[vt]= arr[i]-arr[vt];
			arr[i]= arr[i]-arr[vt];
			break;
		}
	}
	for(int i= arr.size()-1; i>=vt; i--){
		answer = answer * 10 + arr[i];
	}
	for(int i=0; i<vt; i++) answer = answer * 10 + arr[i];
	return answer;
}
int main(){
	long x;
	cin>>x;
	cout<<hoanViChuSo(x);
}
