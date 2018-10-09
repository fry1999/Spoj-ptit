#include<iostream>
#include<unordered_map>
using namespace std;

string newString(string element){
	int begin=0, end=0, n=0;
	for(int i=0; i<element.size(); ++i){
		if(element[i]=='('){
			begin = i ;
		}
		if(element[i]==')'){
			end=i;
			break;
		}
	}
	if(begin== end) return element;
	string temp= element.substr(begin +1, end-begin);
		
	for(int i=0 ; i<n-1; ++i) temp+=temp;
	if(n!=0) end=end+1;
	return newString(element.substr(0, begin) + temp + element.substr(end+1));
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string element;
	long w = 0;
	unordered_map <char, int> umap = {{'C', 12}, {'H', 1}, {'O', 16}};
	cin>>element;
	element = newString(element);
	long mul = 0;
	for(int i=0; i<=element.size(); ++i){
		if(element[i] >='0' && element[i]<='9'){
			w = w + umap[element[i-1]] * (element[i]-'0');
		}
		else{
			w = w + umap[element[i-1]];
		}
	}
	cout<<w;
	
}
