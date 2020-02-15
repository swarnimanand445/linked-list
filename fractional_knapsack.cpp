 #include<bits/stdc++.h>
using namespace std;
struct item
{
int weight,value;
item(int weight,int value):weight(weight),value(value)//parameterized constructor
{}
};
bool cmp(struct item a,struct item b)
{
double r1=(double)a.value/a.weight;
double r2=(double)b.value/b.weight;
return r1>r2;
}
double fractional_knapsack(int w,int n,struct item arr[])
{
sort(arr,arr+n,cmp);
int curr_wt=0;
int final_value=0;
for(int i=0;i<n;i++)
{
if(curr_wt+arr[i].weight<=w)
{
curr_wt+=arr[i].weight;
final_value+=arr[i].value;
}
else
{
int remain=w-arr[i].weight;
final_value+=arr[i].value*((double)remain/arr[i].weight);
}
}
return final_value;
}
int main()
{
int w;
cout<<"enter the total weight";
cin>>w;
item arr[]={ {5,50},{9,70},{8,30},{5,60},{4,20},{5,55},{8,45} };
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"maximum value obtain="<<fractional_knapsack(w,n,arr);
return 0;
}
