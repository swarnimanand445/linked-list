#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	int n,i=1,element;
	struct node *temp,*p,*start,*r;
	cout<<"enter the no of nodes";
	cin>>n;
	cout<<"enter the data at node no "<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=temp;
	temp->prev=temp;
	p=temp;
	start=temp;
	for(i=2;i<=n;i++)
	{
		cout<<"enter the data at node no "<<i;
		cin>>element;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=element;
		temp->next=start;
		temp->prev=p;	
		p->next=temp;
		start->prev=temp;
		p=p->next;
	}

	r=start;
	start->prev->next=start->next;
	start=start->next;
	free(r);
	temp=start;
	cout<<temp->data;
	for(temp=start->next;temp!=start;temp=temp->next)
	{
		cout<<temp->data;
	}
	return 0;
}
