#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
int main()
{
	int n,i=1,element,l=1,c;
	struct node *temp,*p,*start,*r;
	cout<<"enter the no of nodes";
	cin>>n;
	cout<<"enter the data at node no "<<i;
	cin>>element;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=element;
	temp->next=NULL;
	p=temp;
	start=temp;
	for(i=2;i<=n;i++)
	{
		cout<<"enter the data at node no "<<i;
		cin>>element;
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=element;
		temp->next=NULL;	
		p->next=temp;
		p=p->next;
		l++;
	}
	if(l%2==0)
	c=l/2;
	else
	c=l/2+1;
	p=start;
	while(c>2)
	{
		p=p->next;
		c--;
	}
	r=p->next;
	p->next=r->next;
	free(r);
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		cout<<temp->data;
	}
	return 0;
}
