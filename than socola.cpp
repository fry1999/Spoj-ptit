	#include<iostream>
	#include<math.h>
	using namespace std;
	int main()
	{
		long long k, n=0, dem=0;
		cin>>k;
		while(pow(2,n)<k)
		{
			++n;
		}
		long long D=pow(2, n);
		cout<<D<<" ";
		if(k%2==0)
		{
	    	while(k%D!=0)
	    	{
	       		dem++;
	    		D/=2;
	    	}
	    	cout<<dem;
    	}
    	else cout<<n;
}
