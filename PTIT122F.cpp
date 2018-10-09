#include<iostream>
using namespace std;

long long soSieuTuNhien(string w, string x){
	long p=0;
	bool f=false;
	for(int i=0; i<w.size(); ++i){
		if(w[i] !='?'){
			if(w[i] > x[i]){
				f=true;
				p=i;
				break;
			}
			if(w[i] < x[i]) return 0;
		}
		else{
			a.push_back(x[i]-'0');
			f=false;
		}
	}
	if(f==true){
		
	}
	
}
int main(){
	string w, x;
	while(1){
		cin>>w>>x;
		if(w=="#"||x=="#") break;
		
	}
	
}
