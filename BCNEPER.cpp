#include<iostream>
using namespace std;

int main(){
	int t, tt;
	string s;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>tt;
		cin>>s;
		string answer="";
    	long vt;
    	bool flag = true;
    	for(long i= s.size()-1; i>0; --i){
    		if(s[i-1]-'0' < s[i]-'0') {
    			vt= i-1;
	    		flag=false;
	    		break;
	    	}
    	}
    	if(flag == true){
    		cout<<tt<<" BIGGEST"<<endl;
    		continue;
   	   }
    	for(long j=s.size()-1; j>vt; j--){
    		if(s[j]-'0' > s[vt]- '0'){
	    		char c= s[j];
	    		s[j]=s[vt];
	    		s[vt]=c;
	    		break;
	    	}  
    	 }
    	for(long i=0; i<=vt; i++)
    		answer+=s[i];
		for(long i= s.size()-1 ; i>vt; i--)
			answer+=s[i];
    	cout<<tt<<" "<<answer<<endl;
	}
}
