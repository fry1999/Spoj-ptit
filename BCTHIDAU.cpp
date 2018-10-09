#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

typedef struct {
	string name;
	int ptime[4];
	int psub[4];
	int score;
	int scorePunish;
}TEAM;

int compare(TEAM a, TEAM b){
	if(a.score>b.score) return 1;
	else if(a.score < b.score) return 0;
	else{
		if(a.scorePunish<=b.scorePunish) return 1;
		else return 0;
	}
}
int main(){
	int n;
	cin>>n;
	TEAM team[n+5];
	for(int i=1; i<=n; i++){
		cin>>team[i].name>>team[i].psub[1]>>team[i].ptime[1]>>team[i].psub[2]>>team[i].ptime[2]>>team[i].psub[3]>>team[i].ptime[3]>>team[i].psub[4]>>team[i].ptime[4];
	}
	for(int i=1; i<=n; i++){
		team[i].score=0;
		team[i].scorePunish=0;
		for(int j=1; j<=4; j++){
			if(team[i].ptime[j]!=0){
				team[i].score++;
				team[i].scorePunish+= ((team[i].psub[j]-1)*20+team[i].ptime[j]);
			}
		}
	}
	sort(team+1, team+n, compare);
	cout<<team[1].name<<" "<<team[1].score<<" "<<team[1].scorePunish;
}
