#include<iostream>
using namespace std;

struct List{
	int data;
	List* next;
};

List *push(List *p, int x){
	List *temp;
	temp= new List;
	temp->data=x;
	temp->next = p;
	return temp;
}

List *Delete(List *p, int x){
	int d=0;
	List *temp1=p, *temp2=NULL;
	while(temp1->data!=x){
		temp2=temp1;
		temp1= temp1->next;
		d++;
	}
	if(temp2==NULL){
		cout<<d<<" ";
		return p;
	}
	temp2->next = temp1->next;
	delete []temp1;
	cout<<d<<" ";
	p= push(p, x);
	return p;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, n, m, a;
	cin>>t;
	while(t--){
		List *p= NULL;
		cin>>n>>m;
		for(int i=n; i>=1; --i){
			p = push(p, i);
		}
		for(int i=0; i<m; ++i){
			cin>>a;
			p= Delete(p, a);
		}
		cout<<"\n";
	}
}
