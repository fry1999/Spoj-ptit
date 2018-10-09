#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int N;
	string S1, S2, S;
	while(1)
	{
		int dem=0;
	    string temp1="", temp2="";
    	cin>>N;
    	if(N==0) return 0;
    	cin>>S1>>S2>>S;
    	while(1)
    	{
    		for(int i=0; i<2*N; i+=2)
     		{
     			temp1+=S[i+1];
    			temp2+=S[i];
    		}
    		++dem;
     		if(S1==temp1&&S2==temp2)
    		{
     			cout<<dem<<endl;
    			break;
    		}
    		S="";
    		S=temp1+temp2;
    		if(dem>50)
    		{
    			cout<<"-1"<<endl;
    			break;
        	}
		}
		
	}
}
