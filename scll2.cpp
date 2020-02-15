#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int main()
{
	int n,i=1,element;
	struct node *temp,*p,*start,*new_node,*store;
	cout<<"enter the no of nodes";
	cin>>n;
	cout<<"enter the data at node no "<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=temp;

	p=temp;
	start=temp;
	for(i=2;i<=n;i++)
	{
		cout<<"enter the data at node no "<<i;
		cin>>element;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=element;
		temp->next=start;
		p->next=temp;
		p=p->next;
	}

	new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=7;
    new_node->next=start;
    p->next=new_node;
	temp=start;
	cout<<temp->data;
	for(temp=start->next;temp!=start;temp=temp->next)
	{
		cout<<temp->data;
	}
	return 0;
}
