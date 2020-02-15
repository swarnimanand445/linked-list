#include<bits/stdc++.h>
using namespace std;
void optimal_tapes(int L[],int n)
{
sort(L,L+n);
cout<<"optimal order in which program is stored is=";
for(int i=0;i<n;i++)
{
cout<<L[i]<<" ";
cout<<endl;
}
double MRT=0;
for(int i=0;i<n;i++)
{
int sum=0;
for(int j=0;j<=i;j++)
{
sum+=L[j];
}
MRT+=sum;
}
MRT /=n;
cout<<"mean retrival time is "<<MRT;
}
int main()
{
int L[10],n;
cout<<"enter the value of n";
cin>>n;
cout<<"enter the array elements:";
for(int i=0;i<n;i++)
cin>>L[i];
optimal_tapes(L,n);
return 0;
}
