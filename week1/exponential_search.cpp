#include<iostream>
#include<cmath>
using namespace std;
int binary_search(int *arr,int low,int high,int key)
{
int c=0;
while(low<=high)
{
    int mid=(low+high)/2;
    c++;
    if(arr[mid]==key)
    {
    return c;
    }
    else if(arr[mid]>key)
    {
    high=mid-1;
    }
    else
    {
    low=mid+1;
    }
}
cout<<"Not ";
return c;
}
int exponential_search(int *arr,int n,int key)
{
    int c=0;
    if (arr[0]==key)
    {
    c++;
    return c;
    }
    int i = 1;
    c=1;
    while (i < n && arr[i] <=key)
    {
    c++;
    i = i*2;
    }
    int p=binary_search(arr, i/2,min(i, n-1),key);
    cout<<"Present ";
    return c+p;
}
int main()
{
    freopen("input2.txt","r",stdin);
    
    freopen("output3.txt","w",stdout);
    int t; 
    cin<<t;
    while(t--)
    {
    int n;
    cin>>n;
    
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    int c=exponential_search(arr,n,key);
    cout<<c<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
