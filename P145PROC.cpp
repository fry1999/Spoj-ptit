#include<iostream>
#include<vector>
using namespace std;
int main(){
	long x;
	vector <long> arr;
	for(int i=0; i<10; i++){
		cin>>x;
		long du=x%42;
		bool flag=true;
		for(long j=0; j<arr.size(); j++){
			if(arr[j]==du){
				flag=false;
				break;
			}
		}
		if(flag==true){
			arr.push_back(du);
		}
	}
	cout<<arr.size();
}
