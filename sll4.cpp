#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *temp,*p,*start,*r;
	int i=1,element,n;
	cout<<"enter the no of nodes";
	cin>>n;
	cout<<"enter the data at node no"<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=NULL;
	start=temp;
	p=temp;
	for(i=2;i<=n;i++)
	{
	cout<<"enter the data at node no "<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=NULL;
	p->next=temp;
	p=p->next;
	}
	r=start;
	start=start->next;
	free(r);
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data;
	}
	return 0;
}
