#include<bits/stdc++.h>
using namespace std;
void chuyen(string &S1){
	for(long long i=0; i<S1.length(); i++){
		if(S1[i]>='A'&&S1[i]<='Z'){
			S1[i]+=32;
		}
	}
}
int main()
{
	long long T;
	cin>>T;
	cin.ignore();
	for(long long i=0; i<T; i++)
	{
		string S1; string S2="";
		getline(cin, S1);
		chuyen(S1);
		long long sum=0, dem=1;
		for(long long i=0; i<S1.length(); i++){
			bool flag=true;
			for(long long t=0; t<S2.length(); t++){
				if(S2[t]==S1[i]){
					flag=false;
				}
			}
			if(flag==true&&S1[i]!=' '){
				S2+=S1[i];
				for(long long j=i+1; j<S1.length(); j++){
			    	if(S1[j]==S1[i]){
				     	dem++;
			    	}
		    	}
		    	if(dem>=2){
		    		sum+=dem;
		    		dem=1;
				}
			}
			
		}
		cout<<sum<<" ";
		for(long long i=0; i<S2.length(); i++){
			cout<<S2[i];
		}
		cout<<endl;
    }
}
