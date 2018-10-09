#include<iostream>
#include<string>
using namespace std;

void convertBase8(string s){
	string base[8]={"000", "001", "010", "011", "100", "101","110", "111"};
	string answer ="";
	while(s.size()%3 !=0){
		s= '0'+s;
	}	
	for(int i=0; i<s.size()-2; i+=3){
		string s1 =s.substr(i, 3);
		for(int j=0; j<=7; j++){
			if(s1 == base[j]){
				answer+= char(j+48);
			}
		}
	}
	while(answer[0]=='0') answer.erase(0, 1);
	if(answer=="") answer="0";
	cout<<answer;
	
}
int main(){
	string s;
	cin>>s;
	convertBase8(s);
}
