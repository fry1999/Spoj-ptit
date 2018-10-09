#include<iostream>
#include<algorithm>
using namespace std;
struct data
{
	string Name;
	float Score;
}typedef Team;
int compare(Team a, Team b)
{
	if(a.Score<b.Score) return 0;
	if(a.Score==b.Score){
		if(a.Name>b.Name) return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T>0)
	{
		int  ScoreMyTeam, ScoreYourTeam, vt1, vt2;
		string MyTeam, YourTeam;
		Team N[25];
		int n;
		cin>>n;
		cin>>MyTeam;
		cin>>YourTeam;
		for(int i=0; i<n; i++)
		{
			cin>>N[i].Name>>N[i].Score;
			if(N[i].Name==MyTeam){
				ScoreMyTeam=N[i].Score;
			}
			if(N[i].Name==YourTeam){
				ScoreYourTeam=N[i].Score;
			}
    	}
    	for(int i=0; i<n; i++){
    		if(N[i].Name==MyTeam){
    			N[i].Score=ScoreMyTeam+3;
			}
			if(N[i].Name==YourTeam){
				N[i].Score=ScoreYourTeam+0;
			}
		}
		sort(N, N+n, compare);
		for(int i=0; i<n; i++)
		{
			if(N[i].Name==MyTeam){
				cout<<i+1<<" ";
				break;
			}
		}
		for(int i=0; i<n; i++){
   	    	if(N[i].Name==YourTeam){
   	    		N[i].Score=ScoreYourTeam+3;
	        	}
	        if(N[i].Name==MyTeam){
	        	N[i].Score=ScoreMyTeam+0;
			}
		}
		sort(N, N+n, compare);
		for(int i=0; i<n; i++)
		{
			if(N[i].Name==MyTeam){
				cout<<i+1<<" ";
				break;
			}
		}
		for(int i=0; i<n; i++){
   	    	if(N[i].Name==YourTeam){
   	    		N[i].Score=ScoreYourTeam+1;
	        	}
	        if(N[i].Name==MyTeam){
	        	N[i].Score=ScoreMyTeam+1;
			}
		}
		sort(N, N+n, compare);
		for(int i=0; i<n; i++)
		{
			if(N[i].Name==MyTeam){
				cout<<i+1<<endl;
				break;
			}
		}
		--T;
	}
}
