/* I find that : 1 -> A     27 -> AA
                2 -> B      .......
                .....       .......
                26 -> Z     52 -> AZ

So i wil separate eg: c = 17576 = YYZ :
        because c%26==0, c=17576 = 26 * (675 +1);  then temp2+= alphalbet[26];    temp2=Z;
                                    c= 675 =  26 * 25 + 25; then temp2+= alphabet[c%26](because 675 %26 !=0)    temp2= ZY;
                                                   25 = 26 * 0 + 25; then temp2 += alphabet[c%26]  temp2= ZYY;
                                                             0 == 0 so end the loop;
*/
#include<iostream>
using namespace std;

string excel(long long c, string alphabet){
	string answer="";
	while(c){
		if(c%26==0){
			answer= alphabet[0]+ answer;
			c=c/26-1;
		}
		else{
			answer=alphabet[c%26]+ answer;
			c/=26;
		}
	}
	return answer;
}
int main(){
	char s;
	long long r, c;
	string alphabet={"ZABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	while(1){
		cin>>s>>r>>s>>c;
		if(r==0 && c==0) break;
		cout<<excel(c,alphabet)<<r<<endl;
	}
}

