#include<bits/stdc++.h>
using namespace std;
/*void swap(int x,int y)
{
int temp;
temp=x;
x=y;
y=temp;
}*/
void heapify(int arr[],int n,int i)
{
int largest=i;
int l=2*i+1;
int r=2*i+2;
if(l<n && arr[l]>arr[largest])
largest=l;
if(r<n && arr[r]>arr[largest])
largest=r;
if(largest!=i)
{
swap(arr[largest],arr[i]);
heapify(arr,n,largest);
}
}

  
void heap_sort(int arr[],int n)
{
for(int i=n/2-1;i>=0;i--)
{
heapify(arr,n,i);
}
for(int i=n-1;i>=0;i--)
{
swap(arr[0],arr[i]);
heapify(arr,i,0);
}
}

int main()
{

int arr[20],n;
cout<<"enter the value of n";
cin>>n;
cout<<"enter the array elements";
for(int i=0;i<n;i++)
cin>>arr[i];
heap_sort(arr,n);
cout<<"the sorted array is";
 for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
return 0;
}

